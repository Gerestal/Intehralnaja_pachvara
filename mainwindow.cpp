#include "mainwindow.h"
#include "qboxlayout.h"
#include "ui_mainwindow.h"
#include "dialog2.h"
#include "dialog1.h"
#include <QRandomGenerator>
#include <QMouseEvent>
#include <QDebug>
#include <QFile>
#include <QDir>

MainWindow::MainWindow(int requiredClicks, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    clickCounter(0),
    requiredClicks(requiredClicks)
{
    ui->setupUi(this);
    setWindowTitle("Інтэгральная пачвара");
    setWindowIcon(QIcon(":/Integral2.png"));

    ui->progressBar1->setStyleSheet(R"(
QProgressBar {
        border: 1px solid #555;
        border-radius: 0px;
        background-color: pink;
        text-align: center;
    }

QProgressBar::chunk {
        background-color: pink;
        border-radius: 0px;
        min-width: 3px;
    }
)");
    ui->progressBar1->setValue(100);
    this->resize(800, 600);

    QString appDir = QCoreApplication::applicationDirPath();
    QString fileName = appDir
                       + QDir::separator()
                       + "Stat.txt";

    //КУРСОР
    QPixmap cursorPixmap("C:/Users/User/Desktop/QT/Chychelo/Demidovich.png");
    if (!cursorPixmap.isNull()) {

        cursorPixmap = cursorPixmap.scaled(90, 90, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        QCursor customCursor(cursorPixmap, 0, 0);
        this->setCursor(customCursor);
    } else {
        qDebug() << "Не удалось загрузить изображение для курсора.";
    }


    imageLabel = new ClickableLabel(this);


    QPixmap pix("C:/Users/User/Desktop/QT/Chychelo/Integral1.png");
    if (pix.isNull()) {

        pix = QPixmap(100, 100);
        pix.fill(Qt::blue);
    }
    else {

        pix = pix.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    }
    imageLabel->setPixmap(pix);
    imageLabel->setFixedSize(pix.size());
    imageLabel->setStyleSheet("background: transparent;");




    int startX = (this->width() - imageLabel->width()) / 2;
    int startY = (this->height() - imageLabel->height()) / 2;
    imageLabel->move(startX, startY);
    imageLabel->show();


    connect(imageLabel, &ClickableLabel::clicked, this, &MainWindow::handleImageClick);



    moveTimer = new QTimer(this);
    connect(moveTimer, &QTimer::timeout, this, &MainWindow::moveImage);
    moveTimer->start(500);

    //таймер игрока
    elapsedTimer.start();
    moveTimer = new QTimer(this);
    connect(moveTimer, &QTimer::timeout, this, &MainWindow::moveImage);
    moveTimer->start(500);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::moveImage()
{

    int maxX = this->width() - imageLabel->width();
    int maxY = this->height() - imageLabel->height();
    int newX = QRandomGenerator::global()->bounded(maxX);
    int newY = QRandomGenerator::global()->bounded(maxY);
    imageLabel->move(newX, newY);
}

void MainWindow::handleImageClick()
{
    clickCounter++;

    updateProgressBar(clickCounter);



    if (clickCounter >= requiredClicks)
    {
        moveTimer->stop();
        imageLabel->hide();


        qint64 elapsedMs = elapsedTimer.elapsed();
        QFile file("Stat.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
            QTextStream out(&file);

            out << elapsedMs<< Qt::endl;
        }
        file.close();



        QLabel *resultLabel = new QLabel(this);
        QPixmap resultPixmap("C:/Users/User/Desktop/QT/Chychelo/Result1.png");
        if (resultPixmap.isNull()) {

            resultPixmap = QPixmap(200, 200);
            resultPixmap.fill(Qt::red);
        }
        resultLabel->setPixmap(resultPixmap);
        resultLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

        resultLabel->setFixedSize(resultPixmap.size());
        resultLabel->setAlignment(Qt::AlignCenter);
        resultLabel->setGeometry((this->width() - resultLabel->width()) / 2,
                                 (this->height() - resultLabel->height()) / 2,
                                 resultLabel->width(),
                                 resultLabel->height());
        resultLabel->show();


        QTimer::singleShot(2000, [this]() {
            Dialog2 d2;
            connect(&d2, &Dialog2::menuClicked, [this]() {
                Dialog1 *d1 = new Dialog1();
                d1->show();
                this->close();
            });

            connect(&d2, &Dialog2::repeatClicked, [this]() {

                MainWindow *newGame = new MainWindow(this->requiredClicks);
                newGame->show();
                this->close();

                QFile file("Names.txt");
                if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                    qWarning() << "Не удалось открыть файл для чтения:";
                    return;
                }
                QTextStream in(&file);
                QStringList lines;
                while (!in.atEnd()) {
                    lines << in.readLine();  // сохраняем строку с любыми пробелами
                }
                file.close();

                if (lines.isEmpty()) {
                    qWarning() << "Файл пустой, нечего дублировать:";
                    return;
                }

                // 2) Находим индекс последней непустой строки
                int idx = lines.size() - 1;
                while (idx >= 0 && lines.at(idx).trimmed().isEmpty()) {
                    --idx;
                }
                if (idx < 0) {
                    qWarning() << "В файле нет непустых строк:";
                    return;
                }

                // 3) Проверяем маркер и определяем, что дублировать
                const QString marker = QStringLiteral("БЫЛА АЧЫСТКА");
                QString lineToCopy;
                if (lines.at(idx).trimmed() == marker) {
                    // маркер на последней непустой строке → дублируем строку выше
                    if (idx - 1 < 0) {
                        qWarning() << "Нет строки перед маркером для копирования";
                        return;
                    }
                    lineToCopy = lines.at(idx - 1);
                } else {
                    // маркер не найден в конце → дублируем самую последнюю непустую строку
                    lineToCopy = lines.at(idx);
                }

                // 4) Открываем файл в режиме Append и пишем выбранную строку
                if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
                    qWarning() << "Не удалось открыть файл для записи:";
                    return;
                }
                QTextStream out(&file);
                out << lineToCopy << "\n";
                file.close();


            });
            d2.exec();
        });
    }
}

void MainWindow::updateProgressBar(int hp)
{

    unsigned int maxHP = requiredClicks;
    int percent = static_cast<int>(100.0 * hp / maxHP);
    ui->progressBar1->setValue(100-percent);

}




void MainWindow::on_pushButton_clicked()
{
    if (windowState() & Qt::WindowFullScreen) {

        setWindowState(Qt::WindowNoState);
        this->resize(800, 600);
         ui->pushButton->setText("Поўны экран");
    }
    else {

        setWindowState(windowState() | Qt::WindowFullScreen);
        ui->pushButton->setText("Зменшыць");

    }


}

void MainWindow::on_pushButton_2_clicked()
{
    dialog1 = new Dialog1();
     dialog1->show();
    this->close();
}


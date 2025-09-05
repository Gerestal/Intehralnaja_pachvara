#include "dialog1.h"
#include "ui_dialog1.h"
#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QNetworkInterface>

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
setWindowTitle("Першаісная");
setWindowIcon(QIcon(":/Integral2.png"));

this->resize(500, 350);

    ui->comboBox->clear();
    ui->comboBox->addItem("Лёгкая");
    ui->comboBox->addItem("Сярэдняя");
    ui->comboBox->addItem("Складаная");


    QString appDir = QCoreApplication::applicationDirPath();
    QString fileName = appDir
                       + QDir::separator()
                       + "Names.txt";




}



Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_exitButton_clicked()
{
    QApplication::quit();
}

void Dialog1::on_startButton_clicked()
{


    QString name = ui->lineEdit->text();

    if (name.isEmpty()) {
        name = QStringLiteral("Пуста");}

    QFile file("Names.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
        QTextStream out(&file);
        out << name << Qt::endl;
    }
    file.close();



    int requiredClicks = 10;
    QString level = ui->comboBox->currentText();

    if (level == "Лёгкая") {
        requiredClicks = 10;
    } else if (level == "Сярэдняя") {
        requiredClicks = 25;
    } else if (level == "Складаная") {
        requiredClicks = 50;
    }


    MainWindow *mw = new MainWindow(requiredClicks);
    mw->show();


    this->close();
}

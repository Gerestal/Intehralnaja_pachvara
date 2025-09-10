#include "players.h"
#include "ui_players.h"
#include <QFile>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

Players::Players(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Players)
{
    ui->setupUi(this);

    setWindowTitle(QStringLiteral("Рэйтынг"));
    setWindowIcon(QIcon(":/Integral2.png"));
    resize(800, 600);

        setupTable();
        loadPlayersData("Names.txt", "Stat.txt");

}

Players::~Players()
{
    delete ui;
}


void Players::setupTable() {

    ui->tableWidget->setColumnCount(3);

    ui->tableWidget->setHorizontalHeaderLabels(
        QStringList{ "Игрок", "Время", "мс (мілісекунды)" }
        );


    ui->tableWidget->horizontalHeader()->setSectionResizeMode(
        QHeaderView::Stretch
        );
}

void Players::loadPlayersData(const QString &namesPath,
                              const QString &timesPath)
{

    const QString marker = QStringLiteral("БЫЛА АЧЫСТКА");


    auto loadAfterMarker = [&](const QString &path) {
        QFile file(path);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qWarning() << "Не удалось открыть файл:" << path;
            return QStringList{};
        }


        QStringList raw;
        QTextStream in(&file);
        while (!in.atEnd())
            raw << in.readLine().trimmed();
        file.close();


        int startIndex = 0;
        for (int i = 0; i < raw.size(); ++i) {
            if (raw.at(i) == marker)
               startIndex = i + 1;
        }


        QStringList result;
        for (int i = startIndex; i < raw.size(); ++i)
            if (!raw.at(i).isEmpty())
                result << raw.at(i);

        return result;
    };


    QStringList names = loadAfterMarker(namesPath);
    QStringList times = loadAfterMarker(timesPath);


    const int rows = qMin(names.size(), times.size());
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(rows);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(
        { "Имя", "Час", "мс (мілісекунды)" }
        );


    for (int row = 0; row < rows; ++row) {

        ui->tableWidget->setItem(
            row, 0,
            new QTableWidgetItem(names.at(row))
            );


        QTableWidgetItem *timeItem = new QTableWidgetItem;
        timeItem->setData(
            Qt::DisplayRole,
            times.at(row).toLongLong()
            );
        ui->tableWidget->setItem(row, 1, timeItem);


    }


    ui->tableWidget->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableWidget->setSortingEnabled(true);

    ui->tableWidget->sortByColumn(1, Qt::AscendingOrder);
}


void Players::on_pushButton_clicked()
{

    emit aboutToClose();
    close();

}


void Players::on_pushButton_2_clicked()
{
    QString filePath = QFileDialog::getSaveFileName(
        this,
        tr("Захаваць рэйтынг…"),
        QDir::homePath() + "/Рэйтынг.csv",   // начальная папка и имя
        tr("CSV-файлы (*.csv);;Все файлы (*)")
        );


    if (filePath.isEmpty())
        return;


    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return;
    }

    QTextStream out(&file);

out.setEncoding(QStringConverter::System);

    QStringList headers;
    for (int c = 0; c < ui->tableWidget->columnCount(); ++c)
        headers << ui->tableWidget->horizontalHeaderItem(c)->text();
    out << headers.join(",") << "\n";


    for (int r = 0; r < ui->tableWidget->rowCount(); ++r) {
        QStringList rowData;
        for (int c = 0; c < ui->tableWidget->columnCount(); ++c) {
            auto item = ui->tableWidget->item(r, c);
            rowData << (item ? item->text() : QString());
        }
        out << rowData.join(",") << "\n";
    }

    file.close();

}


void Players::on_pushButton_3_clicked()
{
    ui->tableWidget->setRowCount(0);

    QFile file("Names.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << "БЫЛА АЧЫСТКА\n";
    }
    QFile file1("Stat.txt");
        if (file1.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            QTextStream out(&file1);
            out << "БЫЛА АЧЫСТКА\n";
        }
}


#include "dialog2.h"
#include "ui_dialog2.h"
#include <QTcpSocket>

Dialog2::Dialog2(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Dialog2)
{

    ui->setupUi(this);
    setWindowTitle("Дземідовіч задаволены!");
    setWindowIcon(QIcon(":/Integral2.png"));
    this->resize(500, 350);

}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_menuButton_clicked()
{
    emit menuClicked();
    this->close();
}

void Dialog2::on_repeatButton_clicked()
{
    emit repeatClicked();
    this->close();
}

void Dialog2::on_PButton_clicked()
{

        players = new Players(this);

        connect(players, &Players::aboutToClose,
                this,    &Dialog2::show);

        connect(players, &QDialog::finished,
                players, &QObject::deleteLater);

    players->show();

}



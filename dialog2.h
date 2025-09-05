#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include "players.h"
#include "qpushbutton.h"
#include <QTcpSocket>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
     explicit Dialog2( QWidget *parent = nullptr);
    ~Dialog2();

signals:
    void menuClicked();
    void PlayersClicked();
    void repeatClicked();

private slots:
    void on_menuButton_clicked();
    void on_repeatButton_clicked();
    void on_PButton_clicked();

private:
    Ui::Dialog2 *ui;
    Players *players = nullptr;
};

#endif // DIALOG2_H

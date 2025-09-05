#ifndef PLAYERS_H
#define PLAYERS_H

#include <QDialog>


namespace Ui {
class Players;
}

class Players : public QDialog {
    Q_OBJECT

public:
    explicit Players(QWidget    *parent = nullptr);
    ~Players();
signals:
    void aboutToClose();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    void loadPlayersData(const QString &nPath,
                                  const QString &tPath);
    Ui::Players *ui;
    void setupTable();
};

#endif // PLAYERS_H

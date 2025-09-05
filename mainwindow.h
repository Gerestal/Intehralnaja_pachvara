#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>
#include "dialog2.h"
#include "dialog1.h"
#include <QElapsedTimer>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}


class ClickableLabel : public QLabel {
    Q_OBJECT
public:
    explicit ClickableLabel(QWidget *parent = nullptr) : QLabel(parent) {}
signals:
    void clicked();
protected:
    void mousePressEvent(QMouseEvent *event) override {
        emit clicked();
        QLabel::mousePressEvent(event);
    }
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(int requiredClicks, QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void menuClicked();

private slots:
    void moveImage();
    void handleImageClick();
    void updateProgressBar(int);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



private:
    QElapsedTimer elapsedTimer;
    Ui::MainWindow *ui;
    ClickableLabel *imageLabel;
    QTimer *moveTimer;
    int clickCounter;
    int requiredClicks;
    Dialog1 *dialog1 = nullptr;
    QLabel *resultLabel;

};

#endif // MAINWINDOW_H

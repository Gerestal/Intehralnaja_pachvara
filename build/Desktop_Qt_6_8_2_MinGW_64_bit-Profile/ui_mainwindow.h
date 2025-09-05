/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar1;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBar1 = new QProgressBar(centralwidget);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setEnabled(true);
        progressBar1->setGeometry(QRect(10, 10, 250, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar1->sizePolicy().hasHeightForWidth());
        progressBar1->setSizePolicy(sizePolicy);
        progressBar1->setMinimumSize(QSize(0, 0));
        progressBar1->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setPointSize(10);
        progressBar1->setFont(font);
        progressBar1->setValue(100);
        progressBar1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        progressBar1->setOrientation(Qt::Orientation::Horizontal);
        progressBar1->setTextDirection(QProgressBar::Direction::TopToBottom);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 40, 90, 23));
        pushButton->setStyleSheet(QString::fromUtf8(" color: rgb(255, 147, 196);\n"
"font: 9pt \"SimSun-ExtB\";"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 70, 90, 23));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 9pt \"SimSun-ExtB\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        progressBar1->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\226\320\270\320\267\320\275\321\214 \320\270\320\275\321\202\320\265\321\200\320\263\320\260\320\273\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        progressBar1->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\260\320\265\321\202 \320\262 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\260\321\205, \321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\276\321\201\321\202\320\260\320\273\320\276\321\201\321\214 \320\264\320\276 \320\277\320\276\320\261\320\265\320\264\321\213 \320\275\320\260\320\264 \320\270\320\275\321\202\320\265\320\263\321\200\320\260\320\273\320\276\320\274</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        progressBar1->setFormat(QCoreApplication::translate("MainWindow", "HP %p%", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\236\320\275\321\213 \321\215\320\272\321\200\320\260\320\275", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\243 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

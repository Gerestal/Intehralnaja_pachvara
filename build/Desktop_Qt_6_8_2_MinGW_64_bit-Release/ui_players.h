/********************************************************************************
** Form generated from reading UI file 'players.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERS_H
#define UI_PLAYERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Players
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Players)
    {
        if (Players->objectName().isEmpty())
            Players->setObjectName("Players");
        Players->resize(662, 531);
        pushButton = new QPushButton(Players);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(530, 460, 93, 29));
        pushButton_2 = new QPushButton(Players);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(420, 460, 93, 29));
        tableWidget = new QTableWidget(Players);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 20, 591, 421));

        retranslateUi(Players);

        QMetaObject::connectSlotsByName(Players);
    } // setupUi

    void retranslateUi(QDialog *Players)
    {
        Players->setWindowTitle(QCoreApplication::translate("Players", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Players", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Players", "\320\227\320\260\321\205\320\260\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Players: public Ui_Players {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERS_H

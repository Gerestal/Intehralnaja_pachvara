/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *menuButton;
    QPushButton *PButton;
    QPushButton *repeatButton;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName("Dialog2");
        Dialog2->resize(500, 350);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Integral2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Dialog2->setWindowIcon(icon);
        Dialog2->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 239, 226);"));
        label_2 = new QLabel(Dialog2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 80, 431, 81));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 20pt \"SimSun-ExtB\";"));
        layoutWidget = new QWidget(Dialog2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 230, 431, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        menuButton = new QPushButton(layoutWidget);
        menuButton->setObjectName("menuButton");
        menuButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 12pt \"SimSun\";"));

        horizontalLayout->addWidget(menuButton);

        PButton = new QPushButton(layoutWidget);
        PButton->setObjectName("PButton");
        PButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 12pt \"SimSun\";"));

        horizontalLayout->addWidget(PButton);

        repeatButton = new QPushButton(layoutWidget);
        repeatButton->setObjectName("repeatButton");
        repeatButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 12pt \"SimSun\";"));

        horizontalLayout->addWidget(repeatButton);


        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QCoreApplication::translate("Dialog2", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog2", "<html><head/><body><p><span style=\" font-weight:700;\">\320\222\321\213 \320\277\320\265\321\200\320\260\320\274\320\260\320\263\320\273\321\226 \321\226\320\275\321\202\321\215\320\263\321\200\320\260\320\273!</span></p></body></html>", nullptr));
        menuButton->setText(QCoreApplication::translate("Dialog2", "\320\243 \320\274\320\265\320\275\321\216", nullptr));
        PButton->setText(QCoreApplication::translate("Dialog2", "\320\240\321\215\320\271\321\202\321\213\320\275\320\263", nullptr));
        repeatButton->setText(QCoreApplication::translate("Dialog2", "\320\235\320\260\320\275\320\260\320\262\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H

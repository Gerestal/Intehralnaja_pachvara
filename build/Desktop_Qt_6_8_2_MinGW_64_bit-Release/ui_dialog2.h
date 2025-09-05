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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QPushButton *menuButton;
    QPushButton *repeatButton;
    QLabel *label;
    QPushButton *PButton;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName("Dialog2");
        Dialog2->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Integral2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Dialog2->setWindowIcon(icon);
        menuButton = new QPushButton(Dialog2);
        menuButton->setObjectName("menuButton");
        menuButton->setGeometry(QRect(50, 230, 93, 29));
        menuButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196)"));
        repeatButton = new QPushButton(Dialog2);
        repeatButton->setObjectName("repeatButton");
        repeatButton->setGeometry(QRect(270, 230, 93, 29));
        repeatButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196)"));
        label = new QLabel(Dialog2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 70, 311, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"SimSun\";"));
        PButton = new QPushButton(Dialog2);
        PButton->setObjectName("PButton");
        PButton->setGeometry(QRect(160, 230, 93, 29));
        PButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196)"));

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QCoreApplication::translate("Dialog2", "Dialog", nullptr));
        menuButton->setText(QCoreApplication::translate("Dialog2", "\320\243 \320\274\320\265\320\275\321\216", nullptr));
        repeatButton->setText(QCoreApplication::translate("Dialog2", "\320\235\320\260\320\275\320\260\320\262\320\260", nullptr));
        label->setText(QCoreApplication::translate("Dialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff93c4;\">\320\222\321\213 \320\277\320\265\321\200\320\260\320\274\320\260\320\263\320\273\321\226 \321\226\320\275\321\202\321\215\320\263\321\200\320\260\320\273!</span></p></body></html>", nullptr));
        PButton->setText(QCoreApplication::translate("Dialog2", "\320\240\321\215\320\271\321\202\321\213\320\275\320\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H

/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG1_H
#define UI_DIALOG1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QPushButton *startButton;
    QPushButton *exitButton;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName("Dialog1");
        Dialog1->resize(410, 292);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Integral2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Dialog1->setWindowIcon(icon);
        startButton = new QPushButton(Dialog1);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(50, 220, 93, 29));
        startButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 9pt \"SimSun-ExtB\";"));
        exitButton = new QPushButton(Dialog1);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(260, 220, 93, 29));
        exitButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 9pt \"SimSun-ExtB\";"));
        comboBox = new QComboBox(Dialog1);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(50, 170, 301, 26));
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196)"));
        label = new QLabel(Dialog1);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 300, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"SimSun\";"));
        label_2 = new QLabel(Dialog1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 140, 111, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"SimSun-ExtB\";"));

        retranslateUi(Dialog1);

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QCoreApplication::translate("Dialog1", "Dialog", nullptr));
        startButton->setText(QCoreApplication::translate("Dialog1", "\320\237\320\260\321\207\320\260\321\206\321\214", nullptr));
        exitButton->setText(QCoreApplication::translate("Dialog1", "\320\222\321\213\320\271\321\201\321\206\321\226", nullptr));
        label->setText(QCoreApplication::translate("Dialog1", "<html><head/><body><p><span style=\" color:#ff93c4;\">\320\206\320\275\321\202\321\215\320\263\321\200\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\320\260\321\207\320\262\320\260\321\200\320\260</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog1", "<html><head/><body><p><span style=\" color:#ff93c4;\">\320\241\320\272\320\273\320\260\320\264\320\260\320\275\320\260\321\201\321\206\321\214:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H

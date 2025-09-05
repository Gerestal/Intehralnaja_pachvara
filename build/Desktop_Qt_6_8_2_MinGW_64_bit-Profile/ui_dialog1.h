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
#include <QtWidgets/QLineEdit>
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
    QLineEdit *lineEdit;
    QLabel *label_4;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName("Dialog1");
        Dialog1->resize(500, 350);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Integral2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Dialog1->setWindowIcon(icon);
        startButton = new QPushButton(Dialog1);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(330, 290, 121, 41));
        startButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 12pt \"SimSun-ExtB\";"));
        exitButton = new QPushButton(Dialog1);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(50, 290, 121, 41));
        exitButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 12pt \"SimSun-ExtB\";"));
        comboBox = new QComboBox(Dialog1);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(50, 200, 401, 26));
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 147, 196);\n"
"font: 12pt \"SimSun\";"));
        label = new QLabel(Dialog1);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 450, 51));
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
        label_2->setGeometry(QRect(50, 170, 161, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"SimSun-ExtB\";"));
        lineEdit = new QLineEdit(Dialog1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 120, 401, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 108, 142);\n"
"font: 12pt \"Segoe Script\";"));
        label_4 = new QLabel(Dialog1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 90, 171, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 13pt \"SimSun-ExtB\";"));

        retranslateUi(Dialog1);

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QCoreApplication::translate("Dialog1", "Dialog", nullptr));
        startButton->setText(QCoreApplication::translate("Dialog1", "\320\237\320\260\321\207\320\260\321\206\321\214", nullptr));
        exitButton->setText(QCoreApplication::translate("Dialog1", "\320\222\321\213\320\271\321\201\321\206\321\226", nullptr));
        label->setText(QCoreApplication::translate("Dialog1", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ff93c4;\">\320\206\320\275\321\202\321\215\320\263\321\200\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\320\260\321\207\320\262\320\260\321\200\320\260</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog1", "<html><head/><body><p><span style=\" color:#ff93c4;\">\320\241\320\272\320\273\320\260\320\264\320\260\320\275\320\260\321\201\321\206\321\214:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog1", "<html><head/><body><p><span style=\" color:#ff93c4;\">\320\243\320\262\321\217\320\264\320\267\321\226\321\206\320\265 \321\226\320\274\321\217:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H

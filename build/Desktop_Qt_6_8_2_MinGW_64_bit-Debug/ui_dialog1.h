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
        Dialog1->resize(400, 300);
        startButton = new QPushButton(Dialog1);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(50, 220, 93, 29));
        exitButton = new QPushButton(Dialog1);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(230, 220, 93, 29));
        comboBox = new QComboBox(Dialog1);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(50, 170, 271, 26));
        label = new QLabel(Dialog1);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 50, 271, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(16);
        font.setUnderline(true);
        label->setFont(font);
        label_2 = new QLabel(Dialog1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 140, 111, 20));

        retranslateUi(Dialog1);

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QCoreApplication::translate("Dialog1", "Dialog", nullptr));
        startButton->setText(QCoreApplication::translate("Dialog1", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        exitButton->setText(QCoreApplication::translate("Dialog1", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("Dialog1", "\320\230\320\275\321\202\320\265\320\263\321\200\320\260\320\273\321\214\320\275\320\276\320\265 \321\207\321\203\321\207\320\265\320\273\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog1", "\320\241\320\273\320\276\320\266\320\275\320\276\321\201\321\202\321\214:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H

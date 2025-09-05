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

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName("Dialog2");
        Dialog2->resize(400, 300);
        menuButton = new QPushButton(Dialog2);
        menuButton->setObjectName("menuButton");
        menuButton->setGeometry(QRect(60, 230, 93, 29));
        repeatButton = new QPushButton(Dialog2);
        repeatButton->setObjectName("repeatButton");
        repeatButton->setGeometry(QRect(250, 230, 93, 29));
        label = new QLabel(Dialog2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 70, 311, 101));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QCoreApplication::translate("Dialog2", "Dialog", nullptr));
        menuButton->setText(QCoreApplication::translate("Dialog2", "\320\222 \320\274\320\265\320\275\321\216", nullptr));
        repeatButton->setText(QCoreApplication::translate("Dialog2", "\320\227\320\260\320\275\320\276\320\262\320\276", nullptr));
        label->setText(QCoreApplication::translate("Dialog2", "\320\230\320\275\321\202\320\265\320\263\321\200\320\260\320\273 \320\277\320\276\320\261\320\265\320\266\320\264\321\221\320\275!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H

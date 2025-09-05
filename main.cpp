#include <QApplication>
#include "dialog1.h"

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    Dialog1 dialog; dialog.show();
    return a.exec();
}

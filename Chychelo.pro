QT = core
QT       += core gui widgets
CONFIG += c++17 cmdline
QT += network
QT += core
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        dialog1.cpp \
        dialog2.cpp \
        main.cpp \
        mainwindow.cpp \
        players.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    dialog1.ui \
    dialog2.ui \
    mainwindow.ui \
    players.ui

HEADERS += \
    dialog1.h \
    dialog2.h \
    mainwindow.h \
    players.h \


DISTFILES += \
    Demidovich.png \
    Integral1.png \
    Result1.png \
    back1.jpg \
    back2.jpg

RESOURCES += \
    icon.qrc

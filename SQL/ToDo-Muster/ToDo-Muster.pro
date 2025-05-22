QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    dbmanager.cpp \
    main.cpp \
    mainwindow.cpp \
    todoform.cpp

HEADERS += \
    dbmanager.h \
    mainwindow.h \
    todoform.h

FORMS += \
    mainwindow.ui \
    todoform.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

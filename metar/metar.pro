#-------------------------------------------------
#
# Project created by QtCreator 2015-11-30T14:51:11
#
#-------------------------------------------------

QT       -= core gui

TARGET = metar
TEMPLATE = lib
CONFIG += staticlib

SOURCES += metar.cpp \
    ../MyFunctions.cpp

HEADERS += metar.h \
    ../MyFunctions.h
unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

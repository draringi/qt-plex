#-------------------------------------------------
#
# Project created by QtCreator 2014-12-17T16:51:14
#
#-------------------------------------------------

QT       += network multimedia

QT       -= gui

TARGET = qt-plex
TEMPLATE = lib

DEFINES += QTPLEX_LIBRARY

SOURCES += qtplex.cpp

HEADERS += qtplex.h\
        qt-plex_global.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

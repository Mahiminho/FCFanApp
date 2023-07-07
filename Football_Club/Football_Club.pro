#-------------------------------------------------
#
# Project created by QtCreator 2022-05-19T15:51:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Football_Club
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        authorization.cpp \
        coach.cpp \
        costs.cpp \
        finances.cpp \
        leadership.cpp \
        main.cpp \
        mainwindow.cpp \
        players.cpp \
        profit.cpp \
        stadium.cpp \
        team_composition.cpp

HEADERS += \
        authorization.h \
        coach.h \
        costs.h \
        finances.h \
        leadership.h \
        mainwindow.h \
        players.h \
        profit.h \
        stadium.h \
        team_composition.h

FORMS += \
        authorization.ui \
        coach.ui \
        costs.ui \
        finances.ui \
        leadership.ui \
        mainwindow.ui \
        players.ui \
        profit.ui \
        stadium.ui \
        team_composition.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressources.qrc

DISTFILES += \
    ../../Users/Sager/Desktop/FC resources/178px-Real_Madrid.webp \
    ../../Users/Sager/Desktop/FC resources/2739288-uml-objectdiagram.html \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-19_16-07-02.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-20_16-59-26.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-20_17-01-36.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-20_17-03-01.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-20_17-04-50.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-20_17-31-17.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-20_17-31-20.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-20_17-32-52.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-20_17-44-52.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-21_12-39-40.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-22_14-06-27.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-22_17-44-09.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-23_13-26-22.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-24_09-04-06.jpg \
    ../../Users/Sager/Desktop/FC resources/photo_2022-05-24_09-58-06.jpg

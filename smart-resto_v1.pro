#-------------------------------------------------
#
# Project created by QtCreator 2016-11-19T21:47:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = smart-resto_v1
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow_inicio.cpp \
    dialog_salao.cpp \
    dialog_mesa.cpp \
    mainwindow_cardapio.cpp

HEADERS  += mainwindow_inicio.h \
    dialog_salao.h \
    dialog_mesa.h \
    mainwindow_cardapio.h

FORMS    += mainwindow_inicio.ui \
    dialog_salao.ui \
    dialog_mesa.ui \
    mainwindow_cardapio.ui

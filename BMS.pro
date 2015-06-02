#-------------------------------------------------
#
# Project created by QtCreator 2015-06-02T20:54:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BMS
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    formdoctor.cpp \
    formadmin.cpp \
    formpatient.cpp \
    formcontact.cpp \
    formfeedback.cpp \
    shared_funcs.cpp \
    formdiagnostic.cpp

HEADERS  += mainwindow.h \
    formdoctor.h \
    formadmin.h \
    formpatient.h \
    formcontact.h \
    formfeedback.h \
    shared_funcs.h \
    formdiagnostic.h

FORMS    += mainwindow.ui \
    formdoctor.ui \
    formadmin.ui \
    formpatient.ui \
    formcontact.ui \
    formfeedback.ui \
    formdiagnostic.ui

OTHER_FILES +=

RESOURCES += \
    resouces.qrc

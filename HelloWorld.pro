TEMPLATE = app
TARGET = name_of_the_app

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    calculator.cpp \
    main.cpp \
    window.cpp

HEADERS += \
    calculator.h \
    window.h

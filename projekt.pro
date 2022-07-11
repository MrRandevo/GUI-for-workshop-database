QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    edycjastanuzlecenia.cpp \
    harmonogram.cpp \
    logowanie.cpp \
    main.cpp \
    mainwindow.cpp \
    paneldodawaniazlecenia.cpp \
    paneleksperta.cpp \
    panelmagazyniera.cpp \
    panelpracownika.cpp \
    panelrecepcjonisty.cpp \
    panelszefa.cpp \
    panelwycen.cpp \
    raportekonomiczny.cpp \
    zarzadzanieczesciami.cpp \
    zarzadzanieklientami.cpp \
    zarzadzaniemodelami.cpp \
    zarzadzaniepracownikami.cpp \
    zarzadzanieprzegladami.cpp \
    zarzadzaniesamochodami.cpp \
    zarzadzanietypamipracownikow.cpp \
    zarzadzanieuslugami.cpp \
    zarzadzaniewycenami.cpp \
    zarzadzaniezleceniami.cpp

HEADERS += \
    edycjastanuzlecenia.h \
    harmonogram.h \
    logowanie.h \
    mainwindow.h \
    paneldodawaniazlecenia.h \
    paneleksperta.h \
    panelmagazyniera.h \
    panelpracownika.h \
    panelrecepcjonisty.h \
    panelszefa.h \
    panelwycen.h \
    raportekonomiczny.h \
    zarzadzanieczesciami.h \
    zarzadzanieklientami.h \
    zarzadzaniemodelami.h \
    zarzadzaniepracownikami.h \
    zarzadzanieprzegladami.h \
    zarzadzaniesamochodami.h \
    zarzadzanietypamipracownikow.h \
    zarzadzanieuslugami.h \
    zarzadzaniewycenami.h \
    zarzadzaniezleceniami.h

FORMS += \
    edycjastanuzlecenia.ui \
    harmonogram.ui \
    logowanie.ui \
    mainwindow.ui \
    paneldodawaniazlecenia.ui \
    paneleksperta.ui \
    panelmagazyniera.ui \
    panelpracownika.ui \
    panelrecepcjonisty.ui \
    panelszefa.ui \
    panelwycen.ui \
    raportekonomiczny.ui \
    zarzadzanieczesciami.ui \
    zarzadzanieklientami.ui \
    zarzadzaniemodelami.ui \
    zarzadzaniepracownikami.ui \
    zarzadzanieprzegladami.ui \
    zarzadzaniesamochodami.ui \
    zarzadzanietypamipracownikow.ui \
    zarzadzanieuslugami.ui \
    zarzadzaniewycenami.ui \
    zarzadzaniezleceniami.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

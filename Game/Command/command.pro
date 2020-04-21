TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += opengl
QT += OPENGL
LIBS += -lglut
LIBS += -LpathToYourGLUTLip
QT += core gui opengl config
CONFIG += -freeglut
INCLUDEPATH += -L/usr/lib/
LIBS += -lGLU
SOURCES += \
        main.cpp

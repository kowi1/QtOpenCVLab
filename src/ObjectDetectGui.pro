#-------------------------------------------------
#
# Project created by QtCreator 2014-10-30T15:02:17
#
#-------------------------------------------------

QT       += core gui
QT += multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
requires(qtConfig(filedialog))
TARGET = QT5
TEMPLATE = app

SOURCES += main.cpp\
mainwindow.cpp \
aboutdialog.cpp \
    cameradialog.cpp

HEADERS  += mainwindow.h \
aboutdialog.h \
    cameradialog.h

FORMS    += mainwindow.ui \
aboutdialog.ui \
    cameradialog.ui



LIBS += -L"$$_PRO_FILE_PWD_/lib/" -lopencv_core2413
LIBS += -L"$$_PRO_FILE_PWD_/lib/" -lopencv_highgui2413
LIBS += -L"$$_PRO_FILE_PWD_/lib/" -lopencv_imgproc2413
LIBS += -L"$$_PRO_FILE_PWD_/lib/" -lopencv_objdetect2413

INCLUDEPATH += $$(OPENCV_SDK_DIR)/include

LIBS += -L$$(OPENCV_SDK_DIR)/x86/mingw/bin




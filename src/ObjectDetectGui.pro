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



LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_core2413.dll
LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_highgui2413.dll
#LIBS +=lib\libopencv_imgcodecs2413.dll
LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_imgproc2413.dll
#LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_features2d2413.dll
#LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_calib3d2413.dll
LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_objdetect2413.dll
#LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_contrib2413.dll
#LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_legacy2413.dll
#LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_flann2413.dll
#LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_nonfree2413.dll
#LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_video2413.dll
#LIBS += C:\\Users\OLUKOWI\Desktop\QtOpenCVLab\build\lib\libopencv_ml2413.dll

INCLUDEPATH += $$(OPENCV_SDK_DIR)/include

LIBS += -L$$(OPENCV_SDK_DIR)/x86/mingw/bin




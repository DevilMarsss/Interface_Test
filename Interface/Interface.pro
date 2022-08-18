QT += core gui
CONFIG += console

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# usermanagement.cpp中读取和保存Excel
CONFIG += axcontainer
QT += axcontainer

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    can_unpack.cpp \
    changekey.cpp \
    main.cpp \
    mainwindow.cpp \
    userlog.cpp \
    usermanagement.cpp \
    pcie_fun.c \
    ethernet_unpack.cpp \
    public.cpp \
    TimeCounter.cpp \
    qcycleread.cpp \
    TranslateSpeed.cpp \
    qcyclesend.cpp

HEADERS += \
    can_message.h \
    can_unpack.h \
    changekey.h \
    mainwindow.h \
    multiword_types.h \
    pcie_fun.h \
    rtwtypes.h \
    tmwtypes.h \
    userlog.h \
    usermanagement.h \
    xdma_public.h \
    ethernet_unpack.h \
    public.h \
    xdma_lib.h \
    xdma_lib_global.h \
    qcycleread.h \
    TimeCounter.h \
    TranslateSpeed.h \
    qcyclesend.h \
    pthread.h

FORMS += \
    changekey.ui \
    mainwindow.ui \
    userlog.ui \
    usermanagement.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

win32: LIBS += -L$$PWD -lXDMA_lib

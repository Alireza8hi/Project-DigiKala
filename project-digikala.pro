QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Comment.cpp \
    Commodity.cpp \
    Complaint.cpp \
    Dgikala.cpp \
    accountwindow.cpp \
    categorywindow.cpp \
    homewindow.cpp \
    human.cpp \
    main.cpp \
    mainwindow.cpp \
    signupdialog.cpp \
    user.cpp

HEADERS += \
    Comment.h \
    Commodity.h \
    Complaint.h \
    Digikala.h \
    accountwindow.h \
    categorywindow.h \
    homewindow.h \
    human.h \
    mainwindow.h \
    signupdialog.h \
    user.h

FORMS += \
    accountwindow.ui \
    categorywindow.ui \
    homewindow.ui \
    mainwindow.ui \
    signupdialog.ui \
    user.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc

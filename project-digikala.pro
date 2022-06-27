QT       += core gui
QT += gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Comment.cpp \
    Commodity.cpp \
    Complaint.cpp \
    Customer.cpp \
    CustomerWindow.cpp \
    Dgikala.cpp \
    MainAdmin.cpp \
    MainAdminWindow.cpp \
    Seller.cpp \
    SellerWindow.cpp \
    User.cpp \
    accountwindow.cpp \
    categorywindow.cpp \
    homewindow.cpp \
    human.cpp \
    main.cpp \
    mainwindow.cpp \
    signupdialog.cpp \
    signuprules.cpp

HEADERS += \
    Comment.h \
    Commodity.h \
    Complaint.h \
    Customer.h \
    CustomerWindow.h \
    Digikala.h \
    MainAdmin.h \
    MainAdminWindow.h \
    Seller.h \
    SellerWindow.h \
    User.h \
    accountwindow.h \
    categorywindow.h \
    homewindow.h \
    human.h \
    mainwindow.h \
    signupdialog.h \
    signuprules.h

FORMS += \
    CustomerWindow.ui \
    MainAdminWindow.ui \
    SellerWindow.ui \
    accountwindow.ui \
    categorywindow.ui \
    homewindow.ui \
    mainwindow.ui \
    signupdialog.ui \
    signuprules.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc

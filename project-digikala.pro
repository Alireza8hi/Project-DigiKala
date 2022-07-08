QT       += core gui
QT += gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CartDialog.cpp \
    Comment.cpp \
    Commodity.cpp \
    Complaint.cpp \
    Customer.cpp \
    CustomerWindow.cpp \
    DataBaseOther.cpp \
    DataBaseUser.cpp \
    Dgikala.cpp \
    MainAdmin.cpp \
    MainAdminWindow.cpp \
    PostAdmin.cpp \
    PostAdminWindow.cpp \
    ReviewAdmin.cpp \
    ReviewAdminWindow.cpp \
    Seller.cpp \
    SellerWindow.cpp \
    StoreAdmin.cpp \
    StoreAdminWindow.cpp \
    SupportAdmin.cpp \
    SupportAdminWindow.cpp \
    User.cpp \
    accountwindow.cpp \
    allcommoditywindow.cpp \
    categorywindow.cpp \
    commoditiesawaitingapprovaldialog.cpp \
    commoditiesawaitingpostdialog.cpp \
    editcommoditydialog.cpp \
    human.cpp \
    listofcommoditiesdialog.cpp \
    listofpeopledialog.cpp \
    main.cpp \
    mainwindow.cpp \
    messagesdialog.cpp \
    profiledialog.cpp \
    searchdialog.cpp \
    signupdialog.cpp \
    tobeknowndialog.cpp \
    wishlistdialog.cpp

HEADERS += \
    CartDialog.h \
    Comment.h \
    Commodity.h \
    Complaint.h \
    Customer.h \
    CustomerWindow.h \
    DataBaseOther.h \
    DataBaseUser.h \
    Digikala.h \
    MainAdmin.h \
    MainAdminWindow.h \
    PostAdmin.h \
    PostAdminWindow.h \
    ReviewAdmin.h \
    ReviewAdminWindow.h \
    Seller.h \
    SellerWindow.h \
    StoreAdmin.h \
    StoreAdminWindow.h \
    SupportAdmin.h \
    SupportAdminWindow.h \
    User.h \
    accountwindow.h \
    allcommoditywindow.h \
    categorywindow.h \
    commoditiesawaitingapprovaldialog.h \
    commoditiesawaitingpostdialog.h \
    editcommoditydialog.h \
    human.h \
    listofcommoditiesdialog.h \
    listofpeopledialog.h \
    mainwindow.h \
    messagesdialog.h \
    profiledialog.h \
    searchdialog.h \
    signupdialog.h \
    tobeknowndialog.h \
    wishlistdialog.h

FORMS += \
    CartDialog.ui \
    CustomerWindow.ui \
    MainAdminWindow.ui \
    PostAdminWindow.ui \
    ReviewAdminWindow.ui \
    SellerWindow.ui \
    StoreAdminWindow.ui \
    SupportAdminWindow.ui \
    accountwindow.ui \
    allcommoditywindow.ui \
    categorywindow.ui \
    commoditiesawaitingapprovaldialog.ui \
    commoditiesawaitingpostdialog.ui \
    editcommoditydialog.ui \
    listofcommoditiesdialog.ui \
    listofpeopledialog.ui \
    mainwindow.ui \
    messagesdialog.ui \
    profiledialog.ui \
    searchdialog.ui \
    signupdialog.ui \
    tobeknowndialog.ui \
    wishlistdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc

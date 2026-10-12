
QT += widgets

CONFIG += c++17

SOURCES += \
    chatwindow.cpp \
    dmitem.cpp \
    main.cpp

HEADERS += \
    chatwindow.h \
    dmitem.h \
    adminbutton.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc

FORMS += \
    chatwindow.ui


QT += widgets

CONFIG += c++17

SOURCES += \
    chatwindow.cpp \
    dmitem.cpp \
    main.cpp

HEADERS += \
    chatdelegate.h \
    chatwindow.h \
    dmitem.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc

FORMS += \
    chatwindow.ui

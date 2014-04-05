
QT += network quick qml quick opengl
CONFIG += qt plugin link_pkgconfig debug


SOURCES += main.cpp \
    gstvideoplayer.cpp \
    pngitem.cpp

OTHER_FILES += assets/* *.qml \
    TextEntry.qml \
    Guage.qml \
    golight.qml \
    gorecord.qml \
    Map.qml

HEADERS +=    pngitem.h

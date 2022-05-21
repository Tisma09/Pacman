QT       += core gui statemachine

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Graphics/animatedwidget.cpp \
    Graphics/background.cpp \
    Graphics/drawable.cpp \
    Graphics/drawableelem.cpp \
    Graphics/interactive.cpp \
    Graphics/movable.cpp \
    Graphics/regularmove.cpp \
    clyde.cpp \
    ennemi.cpp \
    main.cpp \
    animatedwidget.cpp \
    background.cpp \
    drawable.cpp \
    drawableelem.cpp \
    interactive.cpp \
    movable.cpp \
    notifiercollision.cpp \
    observercollision.cpp \
    personnage.cpp \
    regularmove.cpp \
    mainwindow.cpp

HEADERS += \
    Graphics/animatedwidget.h \
    Graphics/background.h \
    Graphics/consts.h \
    Graphics/drawable.h \
    Graphics/drawableelem.h \
    Graphics/interactive.h \
    Graphics/movable.h \
    Graphics/regularmove.h \
    animatedwidget.h \
    background.h \
    clyde.h \
    consts.h \
    drawable.h \
    drawableelem.h \
    ennemi.h \
    exception.h \
    interactive.h \
    movable.h \
    notifiercollision.h \
    observercollision.h \
    personnage.h \
    regularmove.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    images/background.png \
    images/blinky_ba_1.png \
    images/blinky_ba_2.png \
    images/blinky_dr_1.png \
    images/blinky_dr_2.png \
    images/blinky_ga_1.png \
    images/blinky_ga_2.png \
    images/blinky_ha_1.png \
    images/blinky_ha_2.png \
    images/clyde_ba_1.png \
    images/clyde_ba_2.png \
    images/clyde_dr_1.png \
    images/clyde_dr_2.png \
    images/clyde_ga_1.png \
    images/clyde_ga_2.png \
    images/clyde_ha_1.png \
    images/clyde_ha_2.png \
    images/images.svg \
    images/inky_ba_1.png \
    images/inky_ba_2.png \
    images/inky_dr_1.png \
    images/inky_dr_2.png \
    images/inky_ga_1.png \
    images/inky_ga_2.png \
    images/inky_ha_1.png \
    images/inky_ha_2.png \
    images/pacman_ba_1.png \
    images/pacman_ba_2.png \
    images/pacman_ba_3.png \
    images/pacman_ba_4.png \
    images/pacman_dr_1.png \
    images/pacman_dr_2.png \
    images/pacman_dr_3.png \
    images/pacman_dr_4.png \
    images/pacman_ga_1.png \
    images/pacman_ga_2.png \
    images/pacman_ga_3.png \
    images/pacman_ga_4.png \
    images/pacman_go_1.png \
    images/pacman_go_2.png \
    images/pacman_go_3.png \
    images/pacman_go_4.png \
    images/pacman_ha_1.png \
    images/pacman_ha_2.png \
    images/pacman_ha_3.png \
    images/pacman_ha_4.png \
    images/pastille.png \
    images/pinky_ba_1.png \
    images/pinky_ba_2.png \
    images/pinky_dr_1.png \
    images/pinky_dr_2.png \
    images/pinky_ga_1.png \
    images/pinky_ga_2.png \
    images/pinky_ha_1.png \
    images/pinky_ha_2.png

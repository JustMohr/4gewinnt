#ifndef STEUERUNG_H
#define STEUERUNG_H

#include <QWidget>

#include <QLabel>
#include <QDebug>
#include <QMouseEvent>
#include <QWidget>

#include "bled.h"

class Steuerung : public QWidget
{
    Q_OBJECT

public:
    Steuerung(QWidget *parent = 0);
    ~Steuerung();

    QLabel* label[42];
    BLed* led[42];
    bool isYellow=true;
    BLed* baum[7][6];

public slots:
    void mousePressEvent (QMouseEvent*);
};

#endif // STEUERUNG_H

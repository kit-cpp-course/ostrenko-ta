#ifndef BALL_H
#define BALL_H


#pragma once

#include <QImage>
#include <QRect>

class Ball {

  public:
    Ball();
    ~Ball();
    void resetState();
    void autoMove();
    void setXDir(int);
    void setYDir(int);
    int getXDir();
    int getYDir();
    QRect getRect();
    QImage & getImage();

  private:
    int xdir;
    int ydir;
    QImage image;
    QRect rect;
    static const int INITIAL_X = 187;//координаты начальной позиции по х
    static const int INITIAL_Y = 449;//координаты начальной позиции по у
    static const int RIGHT_EDGE = 380;//правый край игрового поля
};

#endif // BALL_H

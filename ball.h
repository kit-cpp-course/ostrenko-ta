#ifndef BALL_H
#define BALL_H


#pragma once

#include <QImage>
#include <QRect>

class Ball {

  public:
    Ball();
    ~Ball();

  public:
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
    static const int INITIAL_X = 187;
    static const int INITIAL_Y = 449;
    static const int RIGHT_EDGE = 380;
};

#endif // BALL_H

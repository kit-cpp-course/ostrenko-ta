#ifndef PADDLE_H
#define PADDLE_H


#pragma once

#include <QImage>
#include <QRect>

class Paddle {

  public:
    Paddle();
    ~Paddle();
    void resetState();
    void move();
    void setDx(int);
    QRect getRect();
    QImage & getImage();

  private:
    QImage image;
    QRect rect;
    int dx; // сдвиг
    static const int INITIAL_X = 173;//координата начальной позиции по оси х
    static const int INITIAL_Y = 460;//координата начальной позиции по оси у

};

#endif // PADDLE_H

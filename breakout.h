#ifndef BREAKOUT_H
#define BREAKOUT_H


#pragma once

#include <QWidget>
#include <QKeyEvent>
#include "ball.h"
#include "brick.h"
#include "paddle.h"

class Breakout : public QWidget {

  Q_OBJECT

  public:
    Breakout(QWidget *parent = 0);//виджет-окно
    ~Breakout();

  protected:
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);
    void drawObjects(QPainter *);
    void finishGame(QPainter *, QString);
    void moveObjects();
    void startGame();
    void pauseGame();
    void stopGame();
    void victory();
    void checkCollision();

  private:
    int x;
    int timerId;
    static const int N_OF_BRICKS = 56;//количество кирпичей
    static const int DELAY = 10;//интервал для таймера 10 миллисекунд
    static const int BOTTOM_EDGE = 500;//нижний край игрового поля 
    Ball *ball;
    Paddle *paddle;
    Brick *bricks[N_OF_BRICKS];
    bool gameOver;
    bool gameWon;
    bool gameStarted;
    bool paused;
};

#endif // BREAKOUT_H

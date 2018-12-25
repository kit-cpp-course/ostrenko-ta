#include "ball.h"
#include <iostream>

Ball::Ball() {

  xdir = 1; //направление полета шарика по оси x
  ydir = -1; //направление полета шарика по оси y
  image.load(":/images/Images/ball2.png");
  rect = image.rect(); // прямоугольник, соответствующий по форме и размеру полученному изображению
  resetState(); // помещаем шарик в начальное положение 
}

Ball::~Ball() {

  std::cout << ("Ball deleted") << std::endl;
}

void Ball::autoMove() {
 rect.translate(xdir, ydir); // получаем сдвинутую dx и dy на копию прямоугольника

  if (rect.left() == 0) {
    xdir = 1;
  }
  if (rect.right() == RIGHT_EDGE) {
    xdir = -1;
  }
  if (rect.top() == 0) {
    ydir = 1;
  }
}

void Ball::resetState() {
  rect.moveTo(INITIAL_X, INITIAL_Y);
}

void Ball::setXDir(int x) {
  xdir = x;
}

void Ball::setYDir(int y) {
  ydir = y;
}

int Ball::getXDir() {
  return xdir;
}

int Ball::getYDir() {
  return ydir;
}

QRect Ball::getRect() {
  return rect;
}

QImage & Ball::getImage() {
  return image;
}

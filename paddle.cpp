#include "paddle.h"
#include <iostream>

Paddle::Paddle() {

  dx = 0; //сдвиг равен 0
  image.load(":/images/Images/paddle.png");//загружаем изображение
  rect = image.rect();//прямоугольник обрамляет изображенеи
  resetState(); //помещаем на начальную позицию
}

Paddle::~Paddle() {

 std::cout << ("Paddle deleted") << std::endl;
}

void Paddle::setDx(int x) {
  dx = x;
}

void Paddle::move() {

    int x = rect.x() + dx;
    int y = rect.top();
    rect.moveTo(x, y);
}

void Paddle::resetState() {
  rect.moveTo(INITIAL_X, INITIAL_Y);
}

QRect Paddle::getRect() {
  return rect;
}

QImage & Paddle::getImage() {
  return image;
}

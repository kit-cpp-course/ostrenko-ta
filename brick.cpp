#include "brick.h"
#include <iostream>

Brick::Brick(int x, int y) {

  image.load(":/images/Images/brickie1.png");// загружаем изображение
  destroyed = false; 
  rect = image.rect();//прямоугольник обрамляет изображение
  rect.translate(x, y); //помещаем в начальную позицию
}

Brick::~Brick() {

  std::cout << ("Brick deleted") << std::endl;
}

QRect Brick::getRect() {
  return rect;
}

void Brick::setRect(QRect rct) {
  rect = rct;
}

QImage & Brick::getImage() {
  return image;
}

bool Brick::isDestroyed() {
  return destroyed;
}

void Brick::setDestroyed(bool destr) {
  destroyed = destr;
}

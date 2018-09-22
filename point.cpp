#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

void Point::setX(float _x){
  x = _x;
}
void Point::setY(float _y){
  y = _y;
}
void Point::setXY(float _x, float _y){
  x = _x;
  y = _y;
}

float Point::getX(void){
  return x;
}
float Point::getY(void){
  return y;
}

void Point::print(void){
  cout << "(" << x << ","
       << y << ")";
}

Point Point::operator+(Point p1){
  Point ret;
  ret.x = x + p1.x;
  ret.y = y + p1.y;
  return ret;
}
Point Point::operator-(Point p1){
  Point ret;
  ret.x = x - p1.x;
  ret.y = y - p1.y;
  return ret;
}

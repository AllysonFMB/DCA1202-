#include <iostream>
#include <cmath>
#include <math.h>
#include "point.h"

using namespace std;

Point::Point()
{

}

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

Point Point::add(Point p1)
{
    Point ret;
    ret.x = x + p1.x;
    ret.y = y + p1.y;
    return ret;
}

Point Point::sub(Point p1)
{
    Point ret;
    ret.x = x - p1.x;
    ret.y = y - p1.y;
    return ret;
}

float Point::norma()
{
    return sqrt(x*x + y*y);
}

void Point::translada(float a, float b)
{
    x= a+x;y=b+y;
}

void Point::imprime(void){
    cout << "(" << x << ","
         << y << ")";
}

Point Point::rotacao(float a)
{
    float rad = a*M_PI/180;
    Point ret;
    ret.x = (x*cos(rad)) - (y*sin(rad));
    ret.y = (x*sin(rad)) + (y*cos(rad));
    return ret;
}

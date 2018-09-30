#ifndef POINT_H
#define POINT_H

class Point{
private:
    float x;
    float y;
public:
void setX(float _x);
void setY(float _y);
void setXY(float _x, float _y);

float getX(void);
float getY(void);

Point operator + (Point p1);
Point operator - (Point p1);

Point add(Point p1);
Point sub(Point p1);


float norma(void);

void translada(float a, float b);

void imprime(void);

Point rotacao(float a);


};

#endif // POINT_H

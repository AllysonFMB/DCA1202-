#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono{
private:
    int npontos = 0;
    Point pontos[100];
public:

void insertVertice(Point p);
void insertVertice(float a, float b);
int numerodeVertice();
void transladaPoligono(float a, float b);
float areaPoligono();
void imprimirPoligono();

};



#endif // POLIGONO_H

#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono{
private:
    int npontos = 0;
    Point pontos[100];
public:

void insertVertice(Point p);
int numerodeVertice();
void imprimirPoligono();

};



#endif // POLIGONO_H

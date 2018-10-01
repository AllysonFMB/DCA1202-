#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono{
private:
    int npontos = 0;
    Point pontos[100];
public:

    Poligono();
    void insertPontos(Point p);
    void insertPontos(float a, float b);
    int numerodePontos();

    void transladaPoligono(float a, float b);
    float areaPoligono();
    void rotacaoPoligono(float angulo);
    void imprimirPoligono();

};



#endif // POLIGONO_H

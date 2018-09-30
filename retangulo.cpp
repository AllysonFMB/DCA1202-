#include "retangulo.h"
#include "poligono.h"

Retangulo::Retangulo(float x, float y, float largura, float altura)
{
    Poligono a;
    a.insertPontos(x,y);
    a.insertPontos(x+largura, y);
    a.insertPontos(x+largura, y+altura);
    a.insertPontos(x, y+altura);
    return a;
}

#include "retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(float x, float y, float largura, float altura)
{
    insertPontos(x,y);
    insertPontos(x+largura,y);
    insertPontos(x+largura,y+altura);
    insertPontos(x,y+altura);
}

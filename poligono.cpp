#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

void Poligono::insertVertice(Point p)
{
    if(npontos == 0){
        pontos[npontos] = p;
    }
    else{
        npontos++;
        pontos[npontos] = p;
    }
}

int Poligono::numerodeVertice()
{
    return npontos + 1;
}

void Poligono::imprimirPoligono()
{
    int i;
    for(i=0;i<=npontos;i++){
        cout << pontos[i].imprime(); << "->";
    }
}

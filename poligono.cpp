#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

void Poligono::insertVertice(Point p)
{

    if(npontos == 0){
        npontos = 1;
        pontos[npontos] = p;

    }
    else{
npontos ++;
        pontos[npontos] = p;
    }

}

void Poligono::insertVertice(float a, float b)
{   Point p;

    if(npontos == 0){
        npontos = 1;
        p.setXY(a,b);
     pontos[npontos] = p;

    }
    else{
npontos ++;
 p.setXY(a,b);
        pontos[npontos] = p;
    }

}

int Poligono::numerodeVertice()
{
    return npontos;
}

void Poligono::transladaPoligono(float a, float b)
{
    for(int i=1; i<=npontos; i++){
        pontos[i].translada(a,b);
    }
}

float Poligono::areaPoligono()
{
    float area = 0.0;
    for(int i = 1, j = npontos;i < npontos+1;i++, j = npontos){
        area += (pontos[j].getX() + pontos[i].getX()) * (pontos[j].getY() - pontos[i].getY());
    }
    return abs(area/2);
}

void Poligono::imprimirPoligono()
{
    for(int i=1;i<=npontos;i++){
       pontos[i].imprime();
       cout<<" -> ";
    }
}

#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

Poligono::Poligono()
{

}

void Poligono::insertPontos(Point p)
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

void Poligono::insertPontos(float a, float b)
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

int Poligono::numerodePontos()
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
    float a1 = 0.0, a2=0.0;

    pontos[npontos+1] = pontos[1];
    for(int i = 1; i<=npontos;i++){
        a1+=pontos[i].getX()*pontos[i+1].getY();
    }
    for(int i = 1; i<=npontos;i++){
        a2+=pontos[i].getY()*pontos[i+1].getX();
    }
    return abs(a1-a2)/2;
}

void Poligono::rotacaoPoligono(float angulo, Point rP)
{
    float rad = angulo*3.141592/180;
    float xrP, yrP, xPonto, yPonto;

    for(int i=1; i<=npontos;i++){
        xrP = rP.getX();
        yrP = rP.getY();

        xPonto = pontos[i].getX();
        yPonto = pontos[i].getY();

        pontos[i].setX(xrP + cos(rad)*(xPonto - xrP) - sin(rad)*(yPonto - yrP));
        pontos[i].setX(yrP + sin(rad)*(xPonto - xrP) + cos(rad)*(yPonto - yrP));

    }
}

void Poligono::imprimirPoligono()
{
    for(int i=1;i<=npontos;i++){
        pontos[i].imprime();
        cout<<" -> ";
    }
}

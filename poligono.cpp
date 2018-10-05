#include "poligono.h"
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

void Poligono::rotacaoPoligono(float angulo, Point p)
{
    float xi,yi;
    float xf, yf;
    angulo = angulo*M_PI/180;

    xi = p.getX();
    yi = p.getY();

    for(int i=1; i<= npontos; i++){
        xf = pontos[i].getX();
        yf = pontos[i].getY();

        pontos[i].setX(xi + cos(angulo)*(xf-xi) - sin(angulo)*(yf-yi));
        pontos[i].setY(xi + sin(angulo)*(xf-xi) + cos(angulo)*(yf-yi));
    }

}

void Poligono::rotacaoPoligono(float angulo, float x, float y)
{
    float xf, yf;
    angulo = angulo*M_PI/180;

    for(int i=1; i<= npontos; i++){
        xf = pontos[i].getX();
        yf = pontos[i].getY();

        pontos[i].setX(x + cos(angulo)*(xf-x) - sin(angulo)*(yf-y));
        pontos[i].setY(x + sin(angulo)*(xf-x) + cos(angulo)*(yf-y));
    }

}

float Poligono::RCMPoligono(float angulo){
    float xcm = 0.0;
    float ycm = 0.0;
    float xf, yf;
    angulo = angulo*M_PI/180;

    for(int i =1; i<=npontos;i++){
        xcm += pontos[i].getX();
        ycm += pontos[i].getY();
    }

    for(int i=1; i<= npontos; i++){
        xf = pontos[i].getX();
        yf = pontos[i].getY();

        pontos[i].setX((xcm/npontos) + cos(angulo)*(xf-xcm) - sin(angulo)*(yf-(ycm/npontos)));
        pontos[i].setY((xcm/npontos) + sin(angulo)*(xf-xcm) + cos(angulo)*(yf-(ycm/npontos)));
    }
}

void Poligono::imprimirPoligono()
{
    for(int i=1;i<=npontos;i++){
        pontos[i].imprime();
        cout<<" -> ";
    }
}

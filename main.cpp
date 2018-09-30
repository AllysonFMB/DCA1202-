#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
using namespace std;

int main()
{
    Point p1, p2, p3, p4,p5;
    Poligono a;
    Retangulo b;

    p1.setX(1);
    p1.setY(9);
    cout<<"x = "<< p1.getX() << ", y = "<< p1.getY()<<endl;

    p2.setXY(5,5);
    p2.imprime();
    cout<<endl;

    p3 = p2.add(p1);
    p3.imprime();
    cout<<endl;
    cout<< "norma = "<< p3.norma() <<endl;

    p4 = p3.sub(p2);
    p4.imprime();
    cout<<endl;

    p4.translada(2,4);
    p4.imprime();
    cout<<endl;
    p5.setXY(1,0);
    p5.imprime();
    p5.rotacao(90);
    p5.imprime();

    cout<<endl<<"teste de polignos:"<<endl;

    a.insertPontos(0,0);
    a.insertPontos(1,0);
    a.insertPontos(1,1);
    a.insertPontos(0,1);

    a.imprimirPoligono();
    cout<<endl;

    a.rotacaoPoligono(90);

    a.imprimirPoligono();
    cout<<endl;
   b.Retangulo(0,0,2,2);
   b.imprimirPoligono();

    return 0;
}

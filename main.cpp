#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"

using namespace std;

int main()
{
    Point p1, p2, p3, p4,p5;
    Poligono a;

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
    p5.setXY(10,4);

    cout<<"teste de polignos:"<<endl;

    a.insertPontos(0,0);
    a.insertPontos(1,0);
    a.insertPontos(1,1);
    a.insertPontos(0,1);


    cout<<a.numerodePontos()<<endl;

    a.imprimirPoligono();
    float r= a.areaPoligono();
    cout<<endl<<r;
    a.rotacaoPoligono(90);
    a.imprimirPoligono();
    cout<<endl;
    a.transladaPoligono(1,1);
    cout<<endl;

    a.imprimirPoligono();



    return 0;
}

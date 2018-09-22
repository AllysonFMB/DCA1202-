#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

int main()
{
    Point p1, p2, p3, p4;
    p1.setX(1);
    p1.setY(3);
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

    return 0;
}

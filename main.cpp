#include <iostream>
#include <cmath>
#include "retangulo.h"

using namespace std;

int main()
{
    float area1, area2;
    Point p1,p2,p3;
    Retangulo a(0,0,3,4);

    a.imprimirPoligono();

    area1 = a.areaPoligono();
    cout<<"Area do retangulo: "<<area1<<endl;

    a.transladaPoligono(-3,4);

    a.imprimirPoligono();
    area2 = a.areaPoligono();
    cout<<"Area do retangulo: "<<area2<<endl;

    cout<<"Area original: "<<area1<<" vs Area translada : "<<area2<<endl;

    a.RCMPoligono(35);
    a.imprimirPoligono();
    cout<<"area depois da rotacao: "<<a.areaPoligono()<<endl;

    return 0;
}

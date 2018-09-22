#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

int main()
{
    Point p1, p2, p3;
    p1.setXY(4,5);
    p2.setXY(3,2);
    p3 = p1 + p2;

    p1.print();
    cout<<endl;
    p2.print();
    cout<<endl;
    p3.print();
    cout<<endl;


    return 0;
}

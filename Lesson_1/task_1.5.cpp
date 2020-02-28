#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        out << "program for solving quadratic equations";
        int a,b,c,d;
    float x1,x2;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;
    d=(b*b)-4*a*c;
    if (d>0)
        {
        x1=(-(b) + sqrt(d))/(2*a);
        cout <<"x1=" << x1 << endl;
        x2=(-(b) - sqrt(d))/(2*a);
        cout << "x2=" << x2 << endl;
        }
    if (d==0)
        {
        x1=(-(b)+sqrt(d))/(2*a);
        cout << "x1=" << x1 << endl;
        }
    if (d<0)
        {
        cout << "korney net";
        }
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int a,b,c,d;
   float x1,x2;
   cout << "vvedite a: ";
   cin >> a;
   cout << "vvedite b: ";
   cin >> b;
   cout << "vvedite c: ";
   cin >> c;
   d=(b*b)-4*a*c;
   cout << d << endl;
   if (d>0)
    {
    x1=(-(b) + sqrt(d))/(2*a);
    cout << x1 << endl;
    x2=(-(b) - sqrt(d))/(2*a);
    cout << x2 << endl;
    }
   if (d==0)
    {
    x1=(-(b)+sqrt(d))/(2*a);
    cout << x1 << endl;
    }
   if (d<0)
    {
    cout << "korney net";
    }
}

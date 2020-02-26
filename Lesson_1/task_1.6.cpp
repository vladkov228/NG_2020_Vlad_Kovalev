#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"vvedite chislo 1: ";
    cin>>a;
    cout<<"vvedite chislo 2: ";
    cin>>b;
    cout<<"vvedite chislo 3: ";
    cin>>c;
    cout<<"press 1 chtob splusovat"<<endl;
    cout<<"press 2 chtob otnat"<<endl;
    cout<<"press 3 chtob umnozhyt"<<endl;
    cout<<"press 3 chtob podelit"<<endl;
    cout<<"vvedite deystvie: ";
    cin>>d;
    if(d==1)
    {
        if(a+b==c or a+c==b or b+c==a)
        {
            cout<<"Yes";
        }else
        {
            cout<<"No";
        }
    }
    if(d==2)
    {
        if(a-b==c or a-c==b or b-c==a)
        {
            cout<<"Yes";
        }else
        {
            cout<<"No";
        }
    }
    if(d==3)
    {
        if(a*b==c or a*c==b or b*c==a)
        {
            cout<<"Yes";
        }else
        {
            cout<<"No";
        }
    }
    if(d==4)
    {
        if(a/b==c or a/c==b or b/c==a)
        {
            cout<<"Yes";
        }else
        {
            cout<<"No";
        }
    }
}

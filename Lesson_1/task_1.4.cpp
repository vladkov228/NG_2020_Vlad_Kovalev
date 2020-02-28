#include <iostream>

using namespace std;

int main()
{
    int chislo1;
    cout << "enter the first number : ";
    cin >> chislo1;
    int chislo2;
    cout << "enter the second number : ";
    cin >> chislo2;
    int chislo3;
    cout << "enter the third number : ";
    cin >> chislo3;
    if (chislo3==1)
        {
            cout << "result" << chislo1 + chislo2;
        }
    if (chislo3==2)
        {
            cout << "result" << chislo1 - chislo2;
        }
    if (chislo3==3)
        {
            cout << "result" << chislo1*chislo2;
        }
    if (chislo3==4)
        {
        cout << "result" << chislo1/chislo2;
        }
}


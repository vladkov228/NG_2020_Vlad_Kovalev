#include <iostream>

using namespace std;

int main()
{
    int chislo1;
    cout << "vvedite chislo1: ";
    cin >> chislo1;
    int chislo2;
    cout << "vvedite chislo2: ";
    cin >> chislo2;
    int chislo3;
    cout << "vvedite chislo3: ";
    cin >> chislo3;
    if (chislo3==1)
        {
            cout << chislo1 + chislo2;
        }
    if (chislo3==2)
        {
            cout << chislo1 - chislo2;
        }
    if (chislo3==3)
        {
            cout << chislo1*chislo2;
        }
    if (chislo3==4)
        {
        cout << chislo1/chislo2;
        }
}


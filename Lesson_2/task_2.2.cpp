#include <iostream>

using namespace std;

int main()
{
    int chislo;
    do{
        cout << "enter the number: ";
        cin >> chislo;
    }while (chislo < 1);

    for (int i=0; i < chislo; i++){
        cout << i << ", ";
    }

    cout << chislo << ".";

    cout << endl;
}



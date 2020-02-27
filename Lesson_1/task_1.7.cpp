#include <iostream>

using namespace std;

int main()
{
    int zarplata;
    cout << "vvedite zarplatu: ";
    cin >> zarplata;
    if (zarplata > 999)
    {
         if (zarplata < 1000000)
        {
            cout << "Horosho,";
        }
    }
    if (zarplata < 1000)
    {
        cout << "Rabotai bolshe,";
    }
    if (zarplata > 999999)
        {
        cout << "Ti milioner,";
        }
    cout << "no ti molodec";
}

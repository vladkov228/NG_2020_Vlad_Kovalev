#include <iostream>

using namespace std;

int main()
{
    int rabochiy1;
    cout << "vvedite zarplatu rabochiy1: ";
    cin >> rabochiy1;
    int rabochiy2;
    cout << "vvedite zarplatu rabochiy2: ";
    cin >> rabochiy2;
    int rabochiy3;
    cout << "vvedite zarplatu rabochiy3: ";
    cin >> rabochiy3;
    if ( rabochiy1 > rabochiy2 and rabochiy1> rabochiy3 and rabochiy2 > rabochiy3)
    {
        cout << rabochiy1 -rabochiy3;
    }
    if (rabochiy1 > rabochiy3 and rabochiy2 > rabochiy1 and rabochiy2 > rabochiy3)
    {
        cout << rabochiy2 - rabochiy3;
    }
    if (rabochiy1 > rabochiy2 and rabochiy1 > rabochiy3 and rabochiy3 > rabochiy2)
    {
        cout << rabochiy1 - rabochiy2;
    }
    if (rabochiy3 > rabochiy1 and rabochiy3 > rabochiy2 and rabochiy1 > rabochiy2)
    {
        cout << rabochiy3 - rabochiy2;
    }
    if (rabochiy2 > rabochiy1 and rabochiy2 > rabochiy3 and rabochiy3 > rabochiy1)
    {
        cout << rabochiy2 - rabochiy1;
    }
    if (rabochiy3 > rabochiy1 and rabochiy3 > rabochiy2 and rabochiy2 > rabochiy1)
    {
        cout << rabochiy3 - rabochiy1;
    }
    }

#include <iostream>

using namespace std;

int main()
    {
        int a,goriz;

        a=0;
        int i=1;

        cout << "enter the size of square: ";
        cin >> goriz;
        cout << endl;

        while ( a < goriz)
        {
            cout << "* ";
            a++;
            if ( a == goriz and i < goriz)
            {
                cout << endl;
                a = 0;
                i++;
            }
        }
        cout << endl;
    }

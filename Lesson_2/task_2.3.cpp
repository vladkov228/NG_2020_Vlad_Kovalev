#include <iostream>

using namespace std;

int main()
    {
        int odin,dva, tri;

        odin=0;
        int i=1;

        cout << "enter the size of square: ";
        cin >> dva;
        cout << endl;

        while ( odin < dva )
        {
            cout << "* ";
            odin++;
            if ( odin == dva and i < dva)
            {
                cout << endl;
                odin = 0;
                i++;
            }
        }
        cout << endl;
    }

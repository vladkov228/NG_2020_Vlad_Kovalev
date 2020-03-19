#include <iostream>

using namespace std;

int main()
{
    int goriz = 0;
    int sizeOfSquare;
    int vert = 1;

    cout << "enter the size of square: ";
    cin >> sizeOfSquare;
    cout << endl;

    while (goriz < sizeOfSquare)
    {
        cout << "* ";
        goriz++;
        if (goriz == sizeOfSquare and vert < sizeOfSquare)
        {
            cout << endl;
            goriz = 0;
            vert++;
        }
    }
    cout << endl;
}

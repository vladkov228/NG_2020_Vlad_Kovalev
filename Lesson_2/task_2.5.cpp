#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    cout << "enter size of your tree: ";
    cin >> a;

    for (int i = 0; i < a; i++)
    {

        for (int j = 1; j < a - i; j++)
        {
            cout << " " ;
        }

        for (int j = a - 2 * i; j <= a; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    int i = 1;

    while(i <= a)
    {

        cout << ' ' ;

        if (i == a-1)
        {
            cout << '*';
        }

        i++;
    }
}

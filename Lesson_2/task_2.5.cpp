#include <iostream>

using namespace std;

int main()
{
    int sizeOfTree = 0;

    cout << "enter size of your tree: ";
    cin >> sizeOfTree;

    for (int i = 0; i < sizeOfTree; i++)
    {

        for (int j = 1; j < sizeOfTree - i; j++)
        {
            cout << " " ;
        }

        for (int j = sizeOfTree - 2 * i; j <= sizeOfTree; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    int i = 1;

    while(i <= sizeOfTree)
    {

        cout << ' ' ;

        if (i == sizeOfTree -1)
        {
            cout << '*';
        }

        i++;
    }
}

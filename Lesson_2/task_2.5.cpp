#include <iostream>

using namespace std;

int main()
{
    int sizeOfTree = 0;

    cout << "enter size of your tree: ";
    cin >> sizeOfTree;

    for (int counter = 0; counter < sizeOfTree; counter++)
    {

        for (int counter1 = 1; counter1 < sizeOfTree - counter; counter1++)
        {
            cout << " " ;
        }

        for (int counter1 = sizeOfTree - 2 * counter; counter1 <= sizeOfTree; counter1++)
        {
            cout << "*";
        }

        cout << endl;
    }

    int counter = 1;

    while(counter <= sizeOfTree)
    {

        cout << ' ' ;

        if (counter == sizeOfTree -1)
        {
            cout << '*';
        }

        counter++;
    }
}

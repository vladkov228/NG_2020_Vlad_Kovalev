#include <iostream>

using namespace std;

int main()
{
    int sizeOfTree = 0;

    cout << "enter size of your tree: ";
    cin >> sizeOfTree;

    for (int rowCounter = 0; rowCounter < sizeOfTree; rowCounter++)
    {

        for (int elementCounter = 1; elementCounter < sizeOfTree - rowCounter; elementCounter++)
        {
            cout << " " ;
        }

        for (int elementCounter = sizeOfTree - 2 * rowCounter; elementCounter <= sizeOfTree; elementCounter++)
        {
            cout << "*";
        }

        cout << endl;
    }

    int rowCounter = 1;

    while(rowCounter <= sizeOfTree)
    {

        cout << ' ' ;

        if (rowCounter == sizeOfTree -1)
        {
            cout << '*';
        }

        rowCounter++;
    }
}

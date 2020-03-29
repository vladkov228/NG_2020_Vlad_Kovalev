#include <iostream>

using namespace std;

int main()
{
    int zvezda[5], maxim = 0, index_2 = 0;

    for (int index = 0; index < 5; index++)
    {
        cout << "Enter size: ";
        cin >> zvezda[index];
        if(zvezda[index] > maxim)
        {
           maxim = zvezda[index];
        }
    }

    while(index_2 < maxim)
    {
        for (int index = 0; index < 5; index++)
        {
            if ( zvezda[index] > 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            zvezda[index]--;
        }
        cout << endl;
        index_2++;
    }
}

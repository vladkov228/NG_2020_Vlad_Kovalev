#include <iostream>

using namespace std;

int main()
{
    int sizeOfArray = 1, maxValue = 0, arr[sizeOfArray ], quantity;


    for(int indexInPut = 0; indexInPut  < sizeOfArray ;indexInPut ++)
    {
        cout << "Enter number: ";
        cin >> quantity;
        arr[indexInPut] = quantity;
        if(quantity == 0)
        {
            break;
        }
        if (arr[indexInPut] > maxValue)
        {
            maxValue = arr[indexInPut];
        }
        sizeOfArray ++;
    }

    for(int indexOutput = 0; indexOutput < sizeOfArray ; indexOutput++)
    {
        for(int space = 0; space < maxValue - arr[indexOutput] / 2; space++)
        {
            cout << " ";
        }
        for(int stars = 0; stars < arr[indexOutput]; stars++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

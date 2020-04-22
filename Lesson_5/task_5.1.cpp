#include<iostream>
using namespace std;

void func(int arr[],int siz, int num)
{
    for (int index=0; index < siz; index++)
    {
        cout << arr[index] * num << endl;
    }
}

int main()
{
    int siz_arr, index, mult;

    cout << "Enter size array: ";
    cin >> siz_arr;
    int funct[siz_arr];
    for (index = 0; index < siz_arr; index++)
    {
        cout << "Enter number: ";
        cin >> funct[index];
    }
    cout << endl << "Enter number for multiply : " ;
    cin >> mult;

    func(funct, siz_arr, mult );
}

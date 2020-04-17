#include <iostream>

using namespace std;

int func(int arr[], int numb)
{
   for(int index=0; index < 5; index++)
   {
       cout <<  arr[index]* numb << endl;

   }
}


int main()
{
   int arr[5], numb;
   cout << "Enter array : " << endl;
   for(int index=0; index < 5; index++)
   {
       cout << index + 1 << ". element: ";
       cin >> arr[index];
   }
   cout << "Enter a number : ";
   cin >> numb;
   func( arr, numb);
}


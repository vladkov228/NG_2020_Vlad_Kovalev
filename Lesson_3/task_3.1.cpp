#include <iostream>

using namespace std;

int main()
{
   int a[10];
   int x=0;
   for (int i=0; i<10; i++)
   {
       cout << "Enter the school number: ";
       cin >> a[i];
   }
   int b;
   cout << "Enter your school number: ";
   cin >> b;
   for (int j=0; j<10; j++)
   {
      if (a[j] == b)
        {
         x++;
        }
   }
   if (x>=1)
    {
        cout << "I know this school";
    }
    else
    {
        cout << "i don't know this school";
    }
}




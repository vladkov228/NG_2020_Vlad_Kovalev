#include <iostream>
#include <math.h>

using namespace std;

int sum(int numb1, int numb2)
{
    return numb1 + numb2;
}

int minu(int numb1, int numb2)
{
    return numb1 - numb2;
}

float div(int numb1, int numb2)
{
    return (float)numb1 / (float)numb2;
}

int mul(int numb1, int numb2)
{
    return numb1 * numb2;

}

float cor(float numb1)
{
    return sqrt(numb1);
}

int step(int numb1, int numb2)
{
    int res = numb1;
    for(int index=1;index < numb2; index++)
    {
        res *= numb2;
    }
    return res;
}

int main()
{
   int numb1, numb2, choice;
   cout << "Enter choice (1 +, 2 -, 3 *, 4 /, 5 square, 6 power): ";
   cin >> choice;
   if (choice == 5 )
   {
        cout << "Enter number: ";
        cin >> numb1;
   }
   else
   {
        cout << "Enter 1 number: ";
        cin >> numb1;
        cout << "Enter 2 number: ";
        cin >> numb2;
   }


   switch (choice)
   {
        case 1: cout << "result is : " << sum(numb1, numb2); break;
        case 2: cout << "result is : " << minu(numb1, numb2); break;
        case 3: cout << "result is : " << mul(numb1, numb2); break;
        case 4: cout << "result is : " << div(numb1, numb2); break;
        case 5: cout << "result is : " << cor((float)numb1); break;
        case 6: cout << "result is : " << step(numb1, numb2); break;

   }
}

#include <iostream>
#include <math.h>

using namespace std;

int numb(int value)
{
    int val;
    cout << "Enter " << value << " number: ";
    cin >> val;
    return val;
}

int sum(int numb1, int numb2)
{
    return numb1 + numb2;
}

int minu(int numb1, int numb2)
{
    return numb2 - numb1;
}

float div(int numb1, int numb2)
{
    return (float)numb2 / (float)numb1;
}

int mul(int numb1, int numb2)
{
    return numb1 * numb2;

}

float cor(float numb1)
{
    return sqrt(numb1);
}

int power(int numb1, int numb2)
{
    int res = pow(numb2,numb1);
    cout  << endl;
    return res+1;

}

void choices(int numb1,int numb2,int choice)
{
    if (choice == 5 )
    {
        numb1=numb(1) ;
    }
    else
    {
        numb1=numb(1);
        numb2=numb(2);
    }
}
void switches(int numb1,int numb2,int choice)
{

    switch (choice)
    {
        case 1: cout << "result is : " << sum(numb(2), numb(1))<< endl; break;
        case 2: cout << "result is : " << minu(numb(2), numb(1))<< endl; break;
        case 3: cout << "result is : " << mul(numb(2), numb(1))<< endl; break;
        case 4: cout << "result is : " << div(numb(2), numb(1))<< endl; break;
        case 5: cout << "result is : " << cor((float)numb(1))<< endl; break;
        case 6: cout << "result is : " << power(numb(2), numb(1))<< endl; break;
        default: cout << "Error" << endl;
    }
}
int main()
{
    while(1)
    {
        int numb1, numb2, choice;
        cout << "Enter choice (1 +, 2 -, 3 *, 4 /, 5 square, 6 power): ";
        cin >> choice;
        switches( numb1, numb2, choice);
   }
}


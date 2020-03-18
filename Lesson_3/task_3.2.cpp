#include <iostream>

using namespace std;

int main()
{
   int ATM[10]{0,0,0,0,0,0,0,0,0,0};
   int numberOfCard;
   int cash;
   while(0<1)
    {
       cout << "Enter your number of card: ";
       cin >> numberOfCard;
       if( numberOfCard > 0 and numberOfCard < 11 )
    {
       cout << "How much money do you want to put on the card? ";
       cin >> cash;
       ATM[numberOfCard-1] = ATM[numberOfCard-1]+ cash;
       for(int i=0; i<10; i++)
        {
           cout << "Number of card: " << i+1 << ": "<<  ATM[i] << endl;
        }
    }
    else
        {
           cout << "ERROR: 404" << endl;
        }
    }
}

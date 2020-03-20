#include <iostream>

using namespace std;

int main()
{
  int stairs = 0, i=0, counter=1, j=0;

  cout << "Enter the amount of stairs/backstairs/pyramid: ";
  cin >> stairs;

  while (i<stairs)
  {
      while(j < counter )
      {
          cout << "*";
          j++;
      }
      j=0;
      counter++;
      i++;
      cout << endl;
  }
  cout << endl;
  i=0;
  counter = stairs;

  while (i < stairs )
  {
        while ( j < counter)
        {
            cout << "*";
            j++;
        }
        j=0;
        counter--;
        i++;
        cout << endl;
  }
  cout << endl;

  i = 0;
  counter = 0;
  j = 0;
    for (int i = 0; i < stairs; i++)
    {

        for (int j = 1; j < stairs - i; j++)
        {
            cout << ' ';
        }

        for (int j = stairs - 2 * i; j <= stairs; j++)
        {
            cout << '*';
        }

        cout << endl;
    }


    cout << endl;
}

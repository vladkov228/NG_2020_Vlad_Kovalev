#include <iostream>

using namespace std;

int main()
{
  char stroka[1000];
  int a=0;
  int symvol=0;
  bool probel = true;

  cout << "Enter your string: ";
  cin.getline(stroka,1000);

  while(stroka[a] != NULL)
  {
     if(stroka[a] == ' ')
         probel= true;
     else if ( probel )
     {
        symvol ++;
        probel = false;
     }
     a++;
  }
  cout << "\nWords in a sentence: " << symvol << endl;
}



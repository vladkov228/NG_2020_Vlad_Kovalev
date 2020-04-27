#include <iostream>
#include <ctime>

using namespace std;

int Result(int size, int NumOfCubs)
{
      int res = 0;
      srand(time(NULL));
      for(int index = 0; index < NumOfCubs; index++)
      {
          res += (rand()%size+1);
      }
      return res;
}

int main()
{
      int NumOfCubs = 0, SizeOfCub = 0;
      cout << "Enter number cubs: ";
      cin >> NumOfCubs;
      cout << "Enter size of cubs: ";
      cin >> SizeOfCub;
      cout << "Number of points: " << Result(SizeOfCub, NumOfCubs) << endl;
}

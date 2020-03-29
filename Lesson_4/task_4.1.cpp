#include <iostream>

using namespace std;

int main()
{
    char stroka[1000];
    int counter = 0;
    int symvol = 0;
    bool endWord = true;

    cout << "Enter your string: ";
    cin.getline(stroka, 1000);

    while (stroka[counter] != 0)
    {
        if (!(stroka[counter] >= 'a') and (stroka[counter] <= 'z') or (stroka[counter] >= 'A') and (stroka[counter] <= 'Z'))
        {
            endWord = true;
        }
        else if (endWord)
        {
            symvol++;
            endWord = false;
        }
        counter++;
    }
    cout << "\nWords in a sentence: " << symvol << endl;
}



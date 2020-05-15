#include <iostream>

using namespace std;

int main()
{
    char string[100], letters = 0;
    cout << "Enter your string: ";
    cin.getline(string, 100);
    while (string[letters] != NULL)
    {
        if (string[letters] >= 'a' and string[letters] <= 'z')
        {
            cout << char(string[letters] - 32);
        }
        else
        {
            cout << string[letters];
        }
        letters++;
    }
    cout << endl;
}

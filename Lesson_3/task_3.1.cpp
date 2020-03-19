#include <iostream>

using namespace std;

int main()
{
    int numberOfSchool[10];
    bool isFound = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the school number: ";
        cin >> numberOfSchool[i];
    }
    int yourSchool;
    cout << "Enter your school number: ";
    cin >> yourSchool;
    for (int j = 0; j < 10; j++)
    {
        if (numberOfSchool[j] == yourSchool)
        {
            isFound = true;
        }
    }
    if (isFound == true)
    {
        cout << "I know this school";
    }
    else
    {
        cout << "i don't know this school";
    }
}




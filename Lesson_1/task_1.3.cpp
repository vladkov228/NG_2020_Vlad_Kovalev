#include <iostream>

using namespace std;

int main()
{
    int rabochiy1;
    cout << "enter the salary of the first worker: ";
    cin >> rabochiy1;
    int rabochiy2;
    cout << "enter the salary of the second worker: ";
    cin >> rabochiy2;
    int rabochiy3;
    cout << "enter the salary of the third worker: ";
    cin >> rabochiy3;
    if (rabochiy1 > rabochiy2 and rabochiy1 > rabochiy3 and rabochiy2 > rabochiy3)
    {
        cout <<"the difference between the minimum and maximum wages" << rabochiy1 -rabochiy3;
    }
    if (rabochiy1 > rabochiy3 and rabochiy2 > rabochiy1 and rabochiy2 > rabochiy3)
    {
        cout <<"the difference between the minimum and maximum wages" << rabochiy2 - rabochiy3;
    }
    if (rabochiy1 > rabochiy2 and rabochiy1 > rabochiy3 and rabochiy3 > rabochiy2)
    {
        cout <<"the difference between the minimum and maximum wages" << rabochiy1 - rabochiy2;
    }
    if (rabochiy3 > rabochiy1 and rabochiy3 > rabochiy2 and rabochiy1 > rabochiy2)
    {
        cout <<"the difference between the minimum and maximum wages" << rabochiy3 - rabochiy2;
    }
    if (rabochiy2 > rabochiy1 and rabochiy2 > rabochiy3 and rabochiy3 > rabochiy1)
    {
        cout <<"the difference between the minimum and maximum wages" <<  rabochiy2 - rabochiy1;
    }
    if (rabochiy3 > rabochiy1 and rabochiy3 > rabochiy2 and rabochiy2 > rabochiy1)
    {
        cout <<"the difference between the minimum and maximum wages" << rabochiy3 - rabochiy1;
    }
    }

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the first number: ";
    cin >> a;
    cout << "enter the second number: ";
    cin >> b;
    cout << "enter the third number: ";
    cin >> c;
    if (ab==c or ac==b or b*c==a)
    {
        cout << "Yes";
    }
    else if (a+b==c or a+c==b or b+c==a)
    {
        cout << "Yes";
    }
    else if (a-b==c or a-c==b or b-c==a)
    {
        cout << "Yes";
    }
    else if (a/b==c or a/c==b or b/c==a)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

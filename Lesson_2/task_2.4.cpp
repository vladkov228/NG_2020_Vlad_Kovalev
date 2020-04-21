#include <iostream>

using namespace std;

int main()
{
	int stairs = 0, index=0, counter=1, counterOutput=0;

	cout << "Enter the amount of stairs/backstairs/pyramid: ";
	cin >> stairs;

	while (index<stairs)
	{
		while(counterOutput < counter )
		{
			cout << "*";
			counterOutput++;
		}
		counterOutput =0;
		counter++;
		index++;
		cout << endl;
	}
	cout << endl;
	index=0;
	counter = stairs;

	while (index < stairs )
	{
		while (counterOutput < counter)
		{
		cout << "*";
		counterOutput++;
		}
		counterOutput =0;
		counter--;
		index++;
		cout << endl;
	}
	cout << endl;

	index = 0;
	counter = 0;
	counterOutput = 0;
	for (int index = 0; index < stairs; index++)
	{

		for (int counterOutput = 1; counterOutput < stairs - index; counterOutput++)
		{
			cout << ' ';
		}

		for (int counterOutput = stairs - 2 * index; counterOutput <= stairs; counterOutput++)
		{
			cout << '*';
		}

		cout << endl;
	}
	cout << endl;
}

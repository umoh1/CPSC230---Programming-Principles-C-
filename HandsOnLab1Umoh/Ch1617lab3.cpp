#include <iostream>
#include <math.h>
using namespace std;

template <class T>
T calcAbs(T num)
{
	return abs(num);
}

int main()
{
	int totalInt =0, totalDob=0;

	cout << "How many integer values do you wish to total? ";
	cin >> totalInt;

	int sum =0;
	double sum1 =0.0;
	int num =0;
	double num1 =0;

	for(int i = 0; i<totalInt; i++)
	{
		cout << "Enter a value: ";
		cin >> num;
		sum+=calcAbs(num);

	}

	cout << endl<< "The total is " << sum << endl;

	cout << endl<<"How many double values do you wish to total?";
	cin >> totalDob;

	for (int i = 0; i < totalDob; i++)
	{
		cout << "Enter a value: ";
		cin >> num1;
		sum1 += calcAbs(num1);

	}
	cout << endl << "The total is " << sum1 << endl;

}
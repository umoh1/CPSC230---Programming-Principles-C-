#include <iostream>
using namespace std;

double average(double arrayW[], int number);
double sum(double arrayW[], int number);

int main()
{
	double* months;
	int number;

	cout << "Please input the number of monthly sales to be input: " << endl;
	cin >> number;

	months = new double[number];

	for (int i = 0; i < number; i++)
	{
		cout << "Please input the sales for month " << i +1 << endl;
		cin >> *(months + i);
	}

	cout << "The total sales for the year is $" << sum(months, number)<< endl;
	cout << "The average monthly sale is $ "<< average(months, number) << endl;
	
}

double sum(double arrayW[], int number)
{
	double sum = 0;
	for (int i = 0; i < number; i++)
	{
		sum += *(arrayW + i);
	}

	return sum;
}


double average(double arrayW[], int number)
{
	double sum = 0;
	for (int i = 0; i < number; i++)
	{
		sum += *(arrayW + i);
	}

	return sum/number;
}

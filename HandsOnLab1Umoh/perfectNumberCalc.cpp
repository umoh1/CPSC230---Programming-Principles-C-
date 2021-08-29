/*
#include <iostream>
using namespace std;

int perfectNumber(int num);
void perNum();

int main()
{
	perNum();
	return 0;
}

int perfectNumber(int num)
{
	int sum = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	
	if (sum == num)
	{
		cout << num << " is a perfect number" << endl;
		return 1;
	}
	else
	{
		return 0;
	}

	
}
void perNum()
{
	int lastNum = 1;
	int sum = 0;

	while (sum < 4)
	{
		int s = perfectNumber(lastNum); //holds return value, either 1 or 0
		lastNum++; //increments numbers passed to perfect number, testing values from 1 until 3 values are hit
		sum += s; //increments sum when a perfect number is hit
	}

}
*/
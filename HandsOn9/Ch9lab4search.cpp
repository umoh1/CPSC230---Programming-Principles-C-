#include <iostream>
using namespace std;

bool linearSearch(int[], int, int);

int main()
{	
	int* ids;
	int number;

	cout << "Please input the number of ID numbers to be read" << endl;
	cin >> number;

	ids = new int[number];

	for (int i = 0; i < number; i++)
	{
		cout << "Please enter an ID number" << endl;
		cin >> *(ids+i);
	}

	int search; 
	cout << "Please input an ID number to be searched: " << endl;
	cin >> search;

	if (linearSearch(ids, number, search))
	{
		cout << search << " is in the array" << endl;
	}
	else
	{
		cout << search << " is not in the array" << endl;
	}
}

bool linearSearch(int arrayW[], int number, int searching)
{
	for (int i = 0; i < number; i++)
	{
		if (searching==arrayW[i])
		{
			return true;
		}
	}

	return false;
}
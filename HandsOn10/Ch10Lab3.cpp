#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

// PLACE YOUR NAME HERE

const int MAXNAME = 10;

int main()
{

	char name1[MAXNAME];  // holds student name

	int count = 0;

	cout << "Enter your last name using no more than 9 characters: " << endl;

	while (count<9)
	{
		cin >> name1[count];
		count++;
	}
	 name1[9] = '\0';

	cout << "The name entered is ";
	count = 0;
	while (name1[count]!='\0')
	{
		cout << name1[count];
		count++;
	}

	return 0;
}

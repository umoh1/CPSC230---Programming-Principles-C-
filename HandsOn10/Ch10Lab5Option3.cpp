#include <iostream>
using namespace std;

const int STRINGTEXT = 50;

int main()
{
	char string1[STRINGTEXT];

	cout << "Please input a string of no more than 50 characters:" << endl << endl;
	cin.getline(string1, STRINGTEXT);

	cout << "The input string is: " << endl ;
	
	

	int count = 0;
	int amount = 0;

	cout << endl ;
	while (string1[count] != '\0')
	{
		cout << string1[count];

		if (toupper(string1[count]) != 'A' && toupper(string1[count]) != 'E' && toupper(string1[count]) != 'I' && toupper(string1[count]) != 'O' && toupper(string1[count]) != 'U')
		{
			amount++;
		}
		count++;
	}

	cout << endl << "The number of consonants is " << amount << endl;

	return 0;
}
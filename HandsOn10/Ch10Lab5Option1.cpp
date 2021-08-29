#include <iostream>
using namespace std;

const int INPUTSIZE = 50;

int main()
{

	char string1[INPUTSIZE] = { '0' };

	cout << "Enter a string of no more than 50 characters: " << endl;
	cin.get(string1, INPUTSIZE);

	int count = 0;
	int rev = 1;
	int length1 = strlen(string1);
	int flagger = 0;

	while (string1[count]!='\0')
	{
		if (string1[count] != string1[length1 - rev])
		{
			flagger = 1;
		}
		rev++;
		count++;
	}

	if (flagger==0)
	{
		cout << endl<<"You entered a palindrome. " << endl;
	}
	else
	{
		cout << "You didn't enter a palindrome." << endl;
	}
	
	return 0;
}
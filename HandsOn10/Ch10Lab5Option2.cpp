#include <iostream>
using namespace std;

const int STRINGTEXT = 25;

int main()
{
	char string1[STRINGTEXT];
	char string2[STRINGTEXT];

	cout << "Please input the first name " << endl;
	cin.getline(string1, STRINGTEXT);

	cout << "Please input the last name " << endl;
	cin.getline(string2, STRINGTEXT);

	int count = 0;
	cout << endl<<"The names are as follows: " << endl;

	//if string1 comes before string2 alphabetically, print string 1 then 2
	if (strcmp(string1, string2) > 0)
	{
		while (string2[count] != '\0')
		{
			cout << string2[count];
			count++;
		}
		cout << endl;
		count = 0;
		while (string1[count] != '\0')
		{
			cout << string1[count];
			count++;
		}
	}

	//if string2 comes before string1 alphabetically, print string2 then 1
	else if(strcmp(string1, string2) < 0)
	{
		while (string1[count] != '\0')
		{
			cout << string1[count];
			count++;
		}

		cout << endl;
		count = 0;

		

		while (string2[count] != '\0')
		{
			cout << string2[count];
			count++;
		}
	}

	//if equal, print
	else
	{
		while (string1[count] != '\0')
		{
			cout << string1[count];
			count++;
		}

		cout << endl;
		count = 0;

		while (string1[count] != '\0')
		{
			cout << string1[count];
			count++;
		}
	}

	return 0;
}
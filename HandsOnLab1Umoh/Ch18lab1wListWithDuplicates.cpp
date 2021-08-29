#include <iostream>
#include <fstream>
#include <string>
#include "ListWithDuplicates.cpp"
using namespace std;

int main()
{
	ifstream inFile("C:\\Users\\nsika\\Downloads\\words.txt");
	string inWords;
	ListWithDuplicates dupList;

	int i = 0;

	if (inFile)
	{
		while (inFile >> inWords)
		{
			dupList.Store(inWords);
			i++;
		}
		cout << "There are " << dupList.GetLength() << " items in the list. " << endl;
		dupList.PrintList();
	}
	else
	{
		cout << "Error opening file." << endl;
	}
}
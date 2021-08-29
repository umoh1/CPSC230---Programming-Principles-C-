#include <iostream>
#include <fstream>
#include <string>
#include "SortedList.cpp"
using namespace std;

int main()
{
	ifstream inFile("C:\\Users\\nsika\\Downloads\\words.txt");
	string inWords;
	SortedList dupList;

	if (inFile)
	{
		while (inFile >> inWords)
		{
			dupList.Insert(inWords);
		}
		cout << "There are " << dupList.GetLength() << " items in the list. " << endl;
		dupList.PrintList();
	}
	else
	{
		cout << "Error opening file." << endl;
	}
}
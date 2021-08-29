#include <iostream>
#include <fstream>
#include "ItemList.cpp"
using namespace std;

int main()
{
	ItemList items;
	ifstream inFile("C:\\Users\\nsika\\Downloads\\int.txt");

	if (inFile)
	{
		int number = 0;

		while (inFile >> number)
		{
			if (items.IsThere(number))
			{
				continue;
			}
			
			items.Insert(number); //insert numbers
		}

		cout <<endl<< "There are " << items.GetLength() << " items in the list." << endl;
		items.Print();
	}
	else
	{
		cout << "Error opening file." << endl;
	}

	
		items.Delete(-47);
		items.Delete(1926);
		items.Delete(2000);
		cout <<endl<< "After deletion, there are now " << items.GetLength() << " items in the list." << endl;
		items.Print();
	
}
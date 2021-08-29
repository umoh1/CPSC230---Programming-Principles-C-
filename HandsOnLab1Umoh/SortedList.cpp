#include "SortedList.h"
#include <iostream>
#include <string>
using namespace std;

SortedList::SortedList()
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		values[i] = "";
	}
	length = 0;
}

bool SortedList::IsEmpty()
{
	if (length == 0)
	{
		return true;
	}

	return false;
}

bool SortedList::IsFull()
{
	if (length == MAX_ITEMS)
	{
		return true;
	}

	return false;
}

void SortedList::Insert(ItemType item)
{
	int index = length -1;

	//while the index is between 0 and 48
	while (index >= 0 && item < values[index])
	{
		//shift all values to the right
		values[index + 1] = values[index];

		//decrease the index
		index--;
	}

	values[index + 1] = item;
	length++;
}

void SortedList::PrintList()
{

	if (length > 0)
	{
		for (int i = 0; i < length; i++)
		{
			cout << values[i] << endl;
		}
	}
	else
	{
		cout << "List is empty. Cannot print to screen." << endl;
	}
}

int SortedList::GetLength()
{
	return length;
}
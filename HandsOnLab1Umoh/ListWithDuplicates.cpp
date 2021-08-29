#include "ListWithDuplicates.h"
#include <iostream>
#include <string>
using namespace std;

ListWithDuplicates::ListWithDuplicates()
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		values[i] = "";
	}
	length = 0;
}

bool ListWithDuplicates::IsEmpty()
{
	if (length == 0)
	{
		return true;
	}
	
	return false;
}

bool ListWithDuplicates::IsFull()
{
	if (length == MAX_ITEMS)
	{
		return true;
	}

	return false;
}

void ListWithDuplicates::Store(ItemType item)
{
	int index = length;
	if (length < MAX_ITEMS)
	{
		values[index] = item;
		length++;
	}
}

void ListWithDuplicates::PrintList()
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

int ListWithDuplicates::GetLength()
{
	return length;
}
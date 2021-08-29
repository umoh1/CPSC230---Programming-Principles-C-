#include <iostream>
using namespace std;

//uses binary search, linear search, bubble sort, and selection sort
int binarySearch(int[], int, int);
int linearSearch(int[], int, int);
void bubbleSort(int[], int);
void selectionSort(int[], int);

int main()
{
	int search[9] = { 9,8,7,6,1,2,3,4,5 };

	int var = 2;
	int index = binarySearch(search, var, 9);
	if ( index!= -1)
	{
		cout <<endl<< "Element " << var << " is at index " << index << endl;
	}
	else
	{
		cout << "Element not found." << endl;
	}
	return 0;
}

void bubbleSort(int array1[], int size1)
{
	int sort1;
	//outer loop, goes through each element and makes sure that it is put in the right place
	for(int i = 0; i<size1-1; i++)
		for (int j = 0; j <size1-i-1 ; j++)
		{
			if (array1[j] > array1[j + 1])
			{
				sort1 = array1[j];
				array1[j] = array1[j + 1];
				array1[j + 1] = sort1;
			}
		}

	for (int i = 0; i < size1; i++)
	{
		cout << array1[i] << " ";
	}
}


int binarySearch(int array1[], int search, int size1)
{
	//first
	int first = 0;
	//last
	int last = size1 - 1;

	

	bubbleSort(array1, size1);

	while (first <= last)
	{
		//middle
		int middle = (last-first)/ 2;

		if (array1[middle] == search)
		{
			return middle;
		}
		else if (search>array1[middle])
		{
			first = middle;
		}
		else
		{
			last = middle;
		}

	}

	return -1;
}

int linearSearch(int array1[], int search, int size1)
{
	for (int i = 0; i < size1; i++)
	{
		if (search == array1[i])
		{
			return i;
		}

	}

	return -1;
}
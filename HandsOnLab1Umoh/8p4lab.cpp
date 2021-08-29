#include <iostream>
#include <fstream>
using namespace std;

const int ELEMENTS = 50;
int userArray[ELEMENTS];

void bubbleSort(int[], int);
int binarySearch(int[], int, int);
double arrayMean(int[], int);
void displayArray(int[], int );

int main()
{
	ifstream inputFile;
	ofstream outputFile;
	int number;
	int elementSize;
	int num = 0;

	inputFile.open("C:\\Users\\nsika\\Downloads\\intArray.txt");

	if (inputFile)
	{
		while (inputFile >> number)
		{
			number >> elementSize;
			number >> num;
			
			for (int i = 0; i < elementSize; i++)
				number >> userArray[i];
		}
	}
	

	outputFile.open("C:\\Users\\nsika\\Downloads\\intArrayOutput.txt");


		cout << "The array entered by the file is as follows: " << endl;
		displayArray(userArray, elementSize);

	//call bubble sort
		bubbleSort(userArray, elementSize);
	//call binary search

		int check = binarySearch(userArray, elementSize, num);
	//compute the mean 
		
	//print the size of the array entered, the array entered by the user, the sorted array, the int being searched for
	//the location of the int, and the mean

		cout << endl << "This array has " << elementSize << " items." << endl;

		cout << "The sorted array is as follows: " << endl;
		displayArray(userArray, elementSize);

		cout << "The item searched is " << num << endl;

		if (check > 0)
		{
			cout << "The value " << num << " is found at index "<<check+1 << endl;
		}
		else
		{
			cout << "The value " << num << " is not in the list" << endl;
		}

		
		cout<<"The mean of all elements in the array is: " << arrayMean(userArray, elementSize);
		
	//PART D use file to get values instead
}


void displayArray(int array[], int elems)    // function heading
{							   // displays the array	
	for (int count = 0; count < elems; count++)
	{
		cout << array[count] << "  ";
	}
	cout << endl;
}


void bubbleSort(int array[], int elems)
{
	bool swap;
	int temp;
	int bottom = elems - 1;     // bottom indicates the end part of the 
								// array where the largest values have
								// settled in order
	do
	{
		swap = false;
		for (int count = 0; count < bottom; count++)
		{
			if (array[count] > array[count + 1])
			{	          // the next three lines do a swap   
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true; // indicates that a swap occurred
			}
		}
		bottom--;     // bottom is decremented by 1 since each pass through
					// the array adds one more value that is set in order

	} while (swap != false);
	// loop repeats until a pass through the array with
  // no swaps occurs
}


int binarySearch(int array[], int numElems, int value)
{
	int first = 0;		    // First element of list
	int last = numElems - 1;	    // last element of the list
	int middle;			    // variable containing the current 
								   // middle value of the list

	while (first <= last)
	{
		middle = first + (last - first) / 2;

		if (array[middle] == value)
			return middle;	     // if value is in the middle, we are done

		else if (array[middle] < value)
			last = middle - 1;	    // toss out the second remaining half of
							// the array and search the first 
		else
			first = middle + 1;	     // toss out the first remaining half of
							 // the array and search the second
	}

	return -1;			     // indicates that value is not in the array

}

double arrayMean(int array[], int elems)
{
	double sum = 0;
	
	for (int i = 0; i < elems; i++)
	{
		sum += array[i];
	}

	return sum / elems;
}
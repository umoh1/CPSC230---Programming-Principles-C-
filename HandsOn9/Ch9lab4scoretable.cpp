#include <iostream>
using namespace std;

double average(int[], int);
void bubbleSort(int[], int);
void displayArray(int[], int);

int main()
{
	int* scores;
	int number;

	cout << "Enter the number of scores to be inputted: "<<endl;
	cin >> number;

	scores = new int[number];

	for (int i = 0; i<number; i++)
	{
		cout << "Please enter a score: " << endl;
		cin >> scores[i];
	}

	average(scores, number);
	bubbleSort(scores, number);
	cout << "Here are the scores in ascending order:" << endl;
	displayArray(scores, number);

}

double average(int tArray[], int num)
{
	double sum =0;
	for (int i = 0; i < num; i++)
	{
		sum += *(tArray + i);
	}

	return sum / num;
}

void displayArray(int array[], int elems)    // function heading
{							   // displays the array	
	for (int count = 0; count < elems; count++)
	{
		cout << array[count] << endl;
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
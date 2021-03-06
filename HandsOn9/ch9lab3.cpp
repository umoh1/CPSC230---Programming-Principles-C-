#include <iostream>
#include <iomanip>
using namespace std;


int main()

{

	float* monthSales ;		// a pointer used to point to an array
							 // holding monthly sales
	float  total = 0;		// total of all sales
	float  average;			// average of monthly sales
	int    numOfSales;		// number of sales to be processed
	int    count;			// loop counter

	cout << fixed << showpoint << setprecision(2);

	cout << "How many monthly sales will be processed? ";
	cin >> numOfSales;

	// Fill in the code to allocate memory dynamically for the array pointed to by
	// monthSales.
	monthSales = new float[numOfSales];


	if (monthSales == NULL) // Fill in the condition to determine if memory has been 
	  // allocated (or eliminate this if construct if your instructor
	  // tells you it is not needed for your compiler) 

	{
		cout << "Error allocating memory!\n";
		return 1;
	}

	cout << "Enter the sales below\n";

	int i = 1;
	for (count = 0; count < numOfSales; count++)
	{
		cout << "Sales for Month number  "
			<< i // Fill in code to show the number of the month 
			<< " : ";
		i++;
		// Fill in code to bring sales into an element of the array
		cin >> *(monthSales + count);
	}

	for (count = 0; count < numOfSales; count++)
	{
		total = total + monthSales[count];
	}

	average = total / numOfSales;// Fill in code to find the average


		cout << "Average Monthly sale  is $" << average << endl;
	// Fill in the code to deallocate memory assigned to the array.

	return 0;
}

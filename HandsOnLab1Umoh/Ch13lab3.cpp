#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX_LENGTH = 50; // MAX_LENGTH contains the maximum length of our list
class FloatList            // Declares a class that contains an array of floating 
						   // point numbers
{
public:
	void getList(ifstream&);   // Member function that gets data from a file
	void printList() const;    // Member function that prints data from that
							   // file to the screen.
	FloatList();               // constructor that sets length to 0.  
	~FloatList();			   // destructor       
	double average();

private:
	int length;                // Holds the number of elements in the array
	float values[MAX_LENGTH];  // The array of values

};

int main()
{
	ifstream tempData;   // Defines a data file
	FloatList floater;

	// Fill in the code to define an object called list of the class FloatList

	cout << fixed << showpoint;
	cout << setprecision(2);

	tempData.open("C:\\Users\\nsika\\Downloads\\temperatures.txt");
	
	if (tempData)
	{
		
		floater.getList(tempData);
		
		floater.printList();
		cout<<"The average temperature is " << floater.average();
	}
	else
	{
		cout << "Unable to open file." << endl;
	}
	
	// Fill in the code that calls the getList function.
	// Fill in the code that calls the printList function.
	
	tempData.close();
	return 0;
}



FloatList::FloatList()
{
	// Fill in the code to complete this constructor that
	// sets the private data member length to 0
	length = 0;
	for (int i = 0; i < 50; i++)
		values[i] = 0;
}

// Fill in the entire code for the  getList function
// The getList function reads the data values from a data file
// into the values array of the class FloatList
void FloatList::getList(ifstream& hey)
{
	float number;
	int i = 0;
	while (hey >> number)
	{
		values[i] = number;
			i++;
	}
	length = i;
}

// Fill in the entire code for the  printList function
// The printList function prints to the screen the data in 
// the values array of the class FloatList
void FloatList::printList() const
{
	for (int i = 0; i < length; i++)
	{
		cout << values[i] << endl;
	}
	
}

// Fill in the code for the implementation of the destructor
FloatList::~FloatList()
{
	delete [] values;
}

double FloatList::average()
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += values[i];
	}
	delete values;

	return sum / length;

	
}
// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.

// PLACE YOUR NAME HERE

//#include <fstream>
//#include <iomanip>
//#include <iostream>
//using namespace std;

//int main()
//{
//	ifstream dataIn;		// defines an input stream for a data file
//	ofstream dataOut;		// defines an output stream for an output file
//	int quantity =0;			// contains the amount of items purchased
//	float itemPrice=0.0;	    //contains the price of each item
//	float  totalBill;	    //contains the total bill. The price of all items
//
//	dataIn.open("C:\\Users\\nsika\\Downloads\\transaction.txt");  // This opens the file.
//	dataOut.open("bill.txt"); 
//
//	// Fill in the appropriate code in the blank below
//	dataOut<< setprecision(2) << fixed << showpoint;  // formatted output
//
//	if (dataIn)
//	{
//		dataIn >> quantity >> itemPrice;
//	}
//	else
//	{
//		cout << "error opening file" << endl;
//	}
//	// Fill in the input statement that brings in the 
//	// quantity and price of the item.
//	//dataOut << 22 << " " << 10.98;
//	
//
//	// Fill in the assignment statement that determines the totalbill.
//	totalBill = quantity * itemPrice;
//	// Fill in the output statement that prints the total bill,	
//	  // with a label, to an output.
//	dataOut << "The total bill is $"<< totalBill;
//
//	return 0;
//}

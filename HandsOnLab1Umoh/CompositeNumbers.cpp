//#include <iostream>
//using namespace std;
//
//typedef int compositeNumbers[25];
//void fillComposites( int);
//void printComposites(compositeNumbers, int);
//
//int main()
//{
//	compositeNumbers comp;
//	int number;
//	do
//	{
//		cout <<endl<< "Enter in a number to see if it is composite. When you want to stop, enter in -1." << endl;
//		cin >> number;
//
//		if(number>0)
//			fillComposites(number);
//
//	} while (number>0);
//}
//
///*
//	@param upTo : stores the end range of the composite numbers found. EX: starting is always at 2 - upTo
//	@param stop: stores how many numbers within the range should be found
//*/
//void fillComposites(int number)
//{
//	bool check = false;
//	//FIll up the array based on user input, most is 25
//	for (int i = 2; i < number; i++)
//	{
//		if (number % i == 0)
//		{
//			check = true;
//			
//			
//		}
//	}
//
//	if (check)
//	{
//		cout << number << " is a composite number." << endl;
//	}
//	else
//	{
//		cout << number << " is not a composite number." << endl;
//	}
//}
//
//void printComposites(compositeNumbers comp, int stop)
//{
//	for (int i = 0; i < stop; i++)
//		cout << comp[i] << " is composite." << endl;
//}
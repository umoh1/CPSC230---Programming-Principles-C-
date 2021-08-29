//#include <fstream>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	ifstream inputFile;
//	int year;
//	int totalStars = 1;
//	const int population = 1000;
//	inputFile.open("C:\\Users\\nsika\\Downloads\\people.txt");
//
//	cout << "PRAIRIEVILLE POPULATION GROWTH\n(each x represents 1000 people)" << endl;
//	if (inputFile)
//	{
//		for (year = 1900; year < 2001; year += 20)
//		{
//			cout << year << "\t";
//			inputFile >> totalStars;
//			totalStars = totalStars / population;
//			for (int i = 0; i < totalStars; i++)
//			{
//				cout << "x";
//			}
//			cout << endl;
//		}
//	}
//	else
//	{
//		cout << "Error opening File." << endl;
//	}
//	return 0;
//}
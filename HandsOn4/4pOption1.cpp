//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	double quarter1, quarter2, quarter3, quarter4; 
//	double average; //stores average
//
//	cout << "Enter the quarterly water bill for quarter 1: " << endl;
//	cin >> quarter1;
//
//	cout << "Enter the quarterly water bill for quarter 2: " << endl;
//	cin >> quarter2;
//
//	cout << "Enter the quarterly water bill for quarter 3: " << endl;
//	cin >> quarter3;
//
//	cout << "Enter the quarterly water bill for quarter 4: " << endl;
//	cin >> quarter4;
//
//	average = (quarter1 + quarter2 + quarter3 + quarter4) / 12;
//
//	if (average > 75)
//		cout << "Your average monthly bill is: $" << setprecision(2)<<fixed<<average << endl << "You are using an excessive amount of water" << endl;
//	else if (average >= 25 && average <= 75)
//		cout << "Your average monthly bill is: $" << setprecision(2) << fixed<< average << endl << "You are using the typical amount of water" << endl;
//	else if (average >= 0 && average < 25)
//		cout << "Your average monthly bill is: $" << setprecision(2) << fixed<< average << endl << "This is great, you conserve a lot of water!" << endl;
//	else
//		cout << "No negative numbers allowed." << endl;
//	return 0;
//}
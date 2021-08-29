//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int INSTATETUITION = 3000;
//	const int OUTOFSTATETUITION = 4500;
//
//	const int INSTATEHOUSING = 2800;
//	const int OUTOFSTATEHOUSING = 3500;
//
//	char location, //stores whether user is Instate or Out of state
//		housing; //stores whether user needs housing or not
//	int	totalFees =0; //stores the total fees based on location and housing
//
//	cout << "Please enter 'I' if you are in-state or 'O' if you are out of state" << endl;
//	cin >> location;
//
//	cout << "Please enter 'Y' if you require room and board and 'N' if you do not." << endl;
//	cin >> housing;
//
//	if (location == 'I' && housing == 'Y')
//		totalFees += INSTATETUITION + INSTATEHOUSING;
//	else if (location == 'O' && housing == 'Y')
//		totalFees += OUTOFSTATETUITION + OUTOFSTATEHOUSING;
//	else if (location == 'O' && housing == 'N')
//		totalFees += OUTOFSTATETUITION;
//	else if (location == 'I' && housing == 'N')
//		totalFees += INSTATETUITION;
//	else
//		cout << "You did not enter an I or an O. " << endl;
//
//	cout << "Your total bill for this semester is: $" << totalFees << endl;
//	return 0;
//}
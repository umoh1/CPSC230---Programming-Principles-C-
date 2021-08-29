
//Option 2

//#include <iostream>
//#include <iomanip>
//using namespace std;

//int main()
//{
//	int numberOfShirts;
//	double total;
//	const int costPerShirt = 12;
//
//	cout << "Enter how many shirts you would like: " << endl;
//	cin >> numberOfShirts;
//
//	if (numberOfShirts >= 5 && numberOfShirts <= 10)
//	{
//		total = (costPerShirt * numberOfShirts) - (.1 * (costPerShirt * numberOfShirts));
//		cout << "You bought " << numberOfShirts << ". The cost is $12 per shirt and your total is: $" <<setprecision(2)<<fixed<< total << endl;
//	}
//	else if (numberOfShirts >= 11 && numberOfShirts <= 20)
//	{
//		total = (costPerShirt * numberOfShirts) - (.15 * (costPerShirt * numberOfShirts));
//		cout << "You bought " << numberOfShirts << ". The cost is $12 per shirt and your total is: $" << setprecision(2)<<fixed<<total << endl;
//	}
//	else if (numberOfShirts >= 21 && numberOfShirts <= 30)
//	{
//		total = (costPerShirt * numberOfShirts) - (.2 * (costPerShirt * numberOfShirts));
//		cout << "You bought " << numberOfShirts << ". The cost is $12 per shirt and your total is: $" << setprecision(2)<<fixed<<total << endl;
//	}
//	else if (numberOfShirts >= 31)
//	{
//		total = (costPerShirt * numberOfShirts) - (.25 * (costPerShirt * numberOfShirts));
//		cout << "You bought " << numberOfShirts << ". The cost is $12 per shirt and your total is: $" << setprecision(2)<<fixed<< total << endl;
//	}
//	else if (numberOfShirts < 0)
//		cout << "You cannot enter negative numbers." << endl;
//	else
//	{
//		total = (costPerShirt * numberOfShirts);
//		cout << "You are not eligible for a discount at this time. \nThe cost per shirt is $12 and Your total is: $" << setprecision(2)<<fixed<<total << endl;
//	}
//
//	return 0;
//}

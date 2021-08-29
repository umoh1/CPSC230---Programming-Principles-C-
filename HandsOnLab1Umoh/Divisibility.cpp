//#include <iostream>
//using namespace std;
//
//void divisibility(int, int);
//
//int main()
//{
//	int num1, num2;
//	char again;
//	do
//	{
//		cout << "Divisibility: Enter two integers, with the divisor being first. This program will let you know";
//		cout << " whether it can divide into the second dividend. EX: num1 = 3 and num2 = 15: 3|15 = true" << endl;
//
//		cout << endl<<"Enter the divisor: " << endl;
//		cin >> num1;
//		cout << "Enter the dividend: " << endl;
//		cin >> num2;
//
//		divisibility(num1, num2);
//
//		cout << endl << "Do you want to go again? Press y or Y to keep going." << endl;
//		cin >> again;
//
//	} while (again=='y'||again=='Y');
//}
//
//void divisibility(int num1, int num2)
//{
//	if (num2 % num1 == 0)
//		cout << num1 << "|" << num2 << " so they are divisible. " << endl;
//	else
//		cout << num1 << " cannot divide into " << num2 << endl;
//}
#include <iostream>
using namespace std;

template <class T>
T minimum (T num, T num1)
{
	if (num > num1)
	{
		return num1;
	}

	return num;
}

template <class T>
T maximum(T num, T num1)
{
	if (num > num1)
	{
		return num;
	}

	return num1;
}



int main()
{
	int num = 5, num1 = 3;
	double num2 = 5.5, num3 = 3.5;
	string num4 = "hello", num5 = "hi";

	cout << "Minimum of " << num << ", " << num1 << " is: "<< minimum(num,num1) <<endl;
	cout << "Maximum of " << num << ", " << num1 << " is: " << maximum(num, num1) << endl;

	cout << "Minimum of " << num2 << ", " << num3 << " is: " << minimum(num2, num3) << endl;
	cout << "Maximum of " << num2 << ", " << num3 << " is: " << maximum(num2, num3) << endl;

	cout << "Minimum of " << num4 << ", " << num5 << " is: " << minimum(num4, num5) << endl;
	cout << "Maximum of " << num4 << ", " << num5 << " is: " << maximum(num4, num5) << endl;
}


//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//typedef int temperatures[50];
//
//float average (temperatures, int);
//float highestTemp(temperatures, int);
//float lowestTemp(temperatures, int);
//
//int main()
//{
//	
//	cout << "Please input the number of temperatures to be read: " << endl;
//	int numberOfInput;
//	cin >> numberOfInput;
//
//	int i = 0;
//	int count = 1;
//	temperatures inputTemp;
//
//	while (i<numberOfInput)
//	{
//		cout << "Input temperature " << count << ":" << endl;
//		cin >> inputTemp[i];
//		count++;
//		i++;
//	}
//
//	cout <<setprecision(2)<<fixed<<"The average temperature is " <<average(inputTemp, numberOfInput)<<endl;
//	cout << setprecision(2) << fixed << "The highest temperature is " << highestTemp(inputTemp, numberOfInput)<<endl;
//	cout << setprecision(2) << fixed << "The lowest temperature is " << lowestTemp(inputTemp, numberOfInput)<<endl;
//}
//
//float average (temperatures temp, int numGrades)
//{
//	float sum = 0;
//
//	for (int i = 0; i < numGrades; i++)
//	{
//		sum += temp[i];
//	}
//
//	return sum/numGrades;
//}
//
//float highestTemp (temperatures temp, int numGrades)
//{
//	float highest = temp[0];
//
//	for (int i = 0; i < numGrades; i++)
//	{
//		if (temp[i] > highest)
//			highest = temp[i];
//	}
//	return highest;
//}
//
//float lowestTemp (temperatures temp, int numGrades)
//{
//	float lowest = temp[0];
//
//	for (int i = 0; i < numGrades; i++)
//	{
//		if (temp[i] < lowest)
//			lowest = temp[i];
//	}
//	return lowest;
//}
//

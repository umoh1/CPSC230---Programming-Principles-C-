//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//void average(int numOfGrades, float totalSum, float& avgGrade);
//
//int main()
//{
//	int numGrades, grade, i = 0, total = 0;
//	float averageGrade;
//
//	cout << "Enter the number of grades to be inputted: " << endl;
//	cin >> numGrades;
//
//	while (i < numGrades)
//	{
//		cout << "Input a numeric grade between 0-100" << endl;
//		cin >> grade;
//		total += grade;
//		i++;
//	}
//	average(numGrades, total,averageGrade); //compute average grade
//
//	cout <<setprecision(2)<<fixed<< "Average is " << averageGrade << endl;
//
//	if (averageGrade >= 90) //A grade
//	{
//		cout << "The grade is A" << endl;
//	}
//	else if (averageGrade>=80&&averageGrade<=89) //B grade
//	{
//		cout << "The grade is B" << endl;
//	}
//	else if (averageGrade >= 70 && averageGrade <= 79)//C grade
//	{
//		cout << "The grade is C" << endl;
//	}
//	else if (averageGrade >= 60 && averageGrade <= 69)//D grade
//	{
//		cout << "The grade is D" << endl;
//	}
//	else if (averageGrade >= 0 && averageGrade <= 59)//F grade
//	{
//		cout << "The grade is F" << endl;
//	}
//	else //negative grade
//	{
//		cout << "Your grade is negative and cannot be computed." << endl;
//	}
//}
//void average(int numOfGrades, float totalSum, float& avgGrade)
//{
//	avgGrade = totalSum / numOfGrades;
//}

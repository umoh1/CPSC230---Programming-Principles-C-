//#include <iostream>
//using namespace std;
//
//typedef char letterGrades[50];
//int numberOfLetters(letterGrades, int, char);
//
//int main()
//{
//	letterGrades letters;
//	int numGrades;
//	int i = 0;
//
//	cout << "Please input the number of grades to be read in. No more than 50" << endl;
//	cin >> numGrades;
//
//	cout << "All grades must be upper case A B C D or F" << endl;
//	while (i<numGrades)
//	{
//		cout << "Input a grade" << endl;
//		cin >> letters[i];
//		i++;
//	}
//
//	cout << "Number of A = " << numberOfLetters(letters,numGrades,'A') << endl;
//	cout << "Number of B = " << numberOfLetters(letters, numGrades, 'B') << endl;
//	cout << "Number of C = " << numberOfLetters(letters, numGrades, 'C') << endl;
//	cout << "Number of D = " << numberOfLetters(letters, numGrades, 'D') << endl;
//	cout << "Number of F = " << numberOfLetters(letters, numGrades, 'F') << endl;
//}
//
//int numberOfLetters(letterGrades letter, int numElements, char grade)
//{
//	int total = 0;
//	for (int i = 0; i < numElements; i++)
//	{
//		if (letter[i] == grade)
//			total++;
//	}
//
//	return total;
//}
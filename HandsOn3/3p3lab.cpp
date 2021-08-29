/*
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float americanColonial = 85.00,
		modern = 57.50,
		frenchClassical = 127.75;

	int chair1, chair2, chair3; //holds the amount of chairs bought

	cout << "How many American Colonial chairs were sold: ";
	cin >> chair1;

	cout << "How many Modern chairs were sold: ";
	cin >> chair2;

	cout << "How many French Classical chairs were sold: ";
	cin >> chair3;

	cout << setprecision(2) << fixed << "The total dollar sales for each chair type are as followed: "<<endl;
	cout << setprecision(2) << fixed << "American Colonial Chairs: $" << chair1 * americanColonial << endl;
	cout << setprecision(2) << fixed << "Modern Chairs: $" << chair2 * modern<< endl;
	cout << setprecision(2) << fixed << "French Classical Chairs: $" << chair3 *frenchClassical << endl;
	cout << setprecision(2) << fixed << "The total chair sales are: $" << (chair1 * americanColonial) + (chair2 * modern) + (chair3 * frenchClassical) << endl;
	/*
	float grade1, grade2, grade3, average;

	cout << "Please input the first grade: ";
	cin >> grade1;

	cout << "Please input the second grade: ";
	cin >> grade2;

	cout << "Please input the third grade: ";
	cin >> grade3;

	average = (grade1 + grade2 + grade3) / 3;

	cout <<showpoint<<setprecision(2)<<fixed<<"\nThe average of the three grades is: " << average << endl;
	*/
	
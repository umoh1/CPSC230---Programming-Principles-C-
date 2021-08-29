#include <iostream>
#include <string>
using namespace std;

struct airport
{
	int planesLanded, planesDeparted, mostPlanes, leastPlanes;
};

struct airportMath
{
	float averageLanded, averageDeparted;
	int totalLanded, totalDeparted, mostLanded, leastLanded;
	
};

void calculations (airport[]);

int main()
{
	airport onAir[12];
	string month;
	int monthNum;

	for (int i = 0; i < 12; i++)
	{
		monthNum = i + 1;

		switch (monthNum)
		{
		case 1: month = "January"; break;
		case 2: month = "February"; break;
		case 3: month = "March"; break;
		case 4: month = "April"; break;
		case 5: month = "May"; break;
		case 6: month = "June"; break;
		case 7: month = "July"; break;
		case 8: month = "August"; break;
		case 9: month = "September"; break;
		case 10: month = "October"; break;
		case 11: month = "November"; break;
		case 12: month = "December"; break;

		default: cout << "No";
		}

		cout << "Please enter the number of planes that landed in " << month << ": " << endl;
		cin >> onAir[i].planesLanded;

		cout << "Please enter the number of planes that departed in " << month << ": " << endl;
		cin >> onAir[i].planesDeparted;

		cout << "Please enter the greatest number of planes that landed on a single day in " << month << ": " << endl;
		cin >> onAir[i].mostPlanes;

		cout << "Please enter the least number of planes that landed on a single day in " << month << ": " << endl;
		cin >> onAir[i].leastPlanes;
		cout << endl;

	}
	calculations(onAir);

}

void calculations (airport maths[])
{
	int sum = 0;
	int sum2 = 0;
	int high = maths[0].mostPlanes;
	int low = maths[0].leastPlanes;
	int highMonth = 0, lowMonth = 0;
	string month;

	for (int i = 0; i < 12; i++)
	{
		sum += maths[i].planesLanded;
		sum2 += maths[i].planesDeparted;
	}
	airportMath aMath;

	aMath.totalLanded = sum;
	aMath.averageLanded = aMath.totalLanded / 12.0;
	cout << "The average monthly landings for the year is "<< aMath.averageLanded <<endl;

	aMath.totalDeparted = sum2;
	aMath.averageDeparted = aMath.totalDeparted/ 12.0;
	cout << "The average monthly departures for the year is " << aMath.averageDeparted << endl;

	cout << "The total landings for the year is " << sum << endl;
	cout << "The total departures for the year is " << sum2 << endl;

	for (int i = 0; i < 12; i++)
	{
		if (high < maths[i].mostPlanes)
		{
			high = maths[i].mostPlanes;
			highMonth = i+1;
		}

		
	}

	for (int i = 0; i < 12; i++)
	{
		if (low > maths[i].leastPlanes)
		{
			low = maths[i].leastPlanes;
			lowMonth = i + 1;
		}
	}

	switch (highMonth)
	{
	case 1: month = "January"; break;
	case 2: month = "February"; break;
	case 3: month = "March"; break;
	case 4: month = "April"; break;
	case 5: month = "May"; break;
	case 6: month = "June"; break;
	case 7: month = "July"; break;
	case 8: month = "August"; break;
	case 9: month = "September"; break;
	case 10: month = "October"; break;
	case 11: month = "November"; break;
	case 12: month = "December"; break;

	default: cout << "No";
	}

	cout << "The greatest number of planes that landed in a single day is " << high << " which occured in the month of " << month;

	switch (lowMonth)
	{
	case 1: month = "January"; break;
	case 2: month = "February"; break;
	case 3: month = "March"; break;
	case 4: month = "April"; break;
	case 5: month = "May"; break;
	case 6: month = "June"; break;
	case 7: month = "July"; break;
	case 8: month = "August"; break;
	case 9: month = "September"; break;
	case 10: month = "October"; break;
	case 11: month = "November"; break;
	case 12: month = "December"; break;

	default: cout << "No";
	}

	cout << endl << "The least number of planes that landed in a single day is " << low << " which occured in the month of " << month;


}

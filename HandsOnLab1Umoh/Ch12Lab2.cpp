#include <fstream>// FILL IN  DIRECTIVE FOR FILES
#include <iostream>
#include <iomanip>
using namespace std;

const int NAMESIZE = 15;
const int MAXRECORDS = 50;

struct Grades                             // declares a structure
{
	char name[NAMESIZE + 1];
	int test1;
	int test2;
	int final;

};
typedef Grades gradeType[MAXRECORDS];

void readIt(ifstream&, Grades[], int);

int main()

{
	ifstream indata;
	indata.open("C:\\Users\\nsika\\Downloads\\graderoll.dat");
	int numRecord = 4;                  // number of records read in
	gradeType studentRecord;

	if (!indata)
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;
		return 1;
	}

	readIt(indata, studentRecord, numRecord);

	// output the information 
	for (int count = 0; count < numRecord; count++)
	{
		cout << studentRecord[count].name << setw(10)
			<< studentRecord[count].test1
			<< setw(10) << studentRecord[count].test2;
		cout << setw(10) << studentRecord[count].final << endl;
	}

	return 0;
}

void readIt(ifstream& inData, Grades gradeRec[], int total)
{
	total = 0;

	inData.get(gradeRec[total].name, NAMESIZE);

	while (inData)
	{
		// FILL IN THE CODE TO READ test1
		inData >> gradeRec[total].test1;

		// FILL IN THE CODE TO READ test2
		inData >> gradeRec[total].test2;

		// FILL IN THE CODE TO READ final
		inData >> gradeRec[total].final;

		// add one to total
		total++;

		// FILL IN THE CODE TO CONSUME THE END OF LINE
		inData.ignore();

		// FILL IN THE CODE TO READ name
		inData.get(gradeRec[total].name, NAMESIZE);

	}
}
 
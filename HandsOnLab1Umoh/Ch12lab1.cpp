#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Fill in the code to define payFile as an input file 
	float gross = 0;
	float net = 0;
	float hours = 0;
	float payRate = 0;
	float stateTax = 0;
	float fedTax = 0;

	fstream payFile;

	cout << fixed << setprecision(2) << showpoint;
	payFile.open("C:\\Users\\nsika\\OneDrive\\Attachments\\Desktop\\AccessFormTemplates\\General\\payroll.dat", ios::in);

	if (!payFile)
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;
		return 1;
	}

	cout << "Payrate      Hours    Gross Pay       Net Pay"
		<< endl << endl;

	while (payFile)
	{
		payFile >> hours >> payRate >> stateTax >> fedTax;
		gross = payRate * hours;
		net = gross - (gross * stateTax) - (gross * fedTax);
		cout << payRate << setw(15) << hours << setw(12) << gross
			<< setw(12) << net << endl;
		//payFile >> ;// FILL IN THE CODE TO FINISH THIS WITH THE APPROPRIATE  
				   // VARIABLE TO BE INPUT
	}
	payFile.close();
	return 0;

}

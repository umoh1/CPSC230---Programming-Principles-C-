#include <iostream>
using namespace std;

class SavingsAccount
{
private:
	int dollars;
	int cents;
public:
	SavingsAccount();
	SavingsAccount(int, int);
	void deposit(int, int);
	void withdrawal(int, int);
	void showBalance();
};

int main()
{
	int initD, initC;
	cout << "Please input the initial dollars: ";
	cin >> initD;
	cout << "Please input the initial cents: ";
	cin >> initC;
	cout << endl;
	SavingsAccount bank1 (initD, initC);
	SavingsAccount bank2;

	char check;
	char check1;
	do
	{
		cout << "Would you like to make a deposit? Y or y for yes" << endl;
		
		cin >> check;

		if (toupper(check)=='Y')
		{
			cout << "Please input dollars to be deposited: ";
			int doll;
			cin >> doll;

			cout<< "Please input cents to be deposited: ";
			int cent;
			cin >> cent;

			bank1.deposit(doll, cent);
		}


	} while (toupper(check) == 'Y');
	bank1.showBalance();

	do
	{
		cout << "Would you like to make a withdrawal? Y or y for yes" << endl;
		
		cin >> check1;

		if (toupper(check1) == 'Y')
		{
			cout << "Please input dollars to be withdrawn: ";
			int doll;
			cin >> doll;

			cout << "Please input cents to be withdrawn: ";
			int cent;
			cin >> cent;

			bank1.withdrawal(doll, cent);
		}

	} while (toupper(check1)=='Y');

	bank1.showBalance();

	cout << endl << "Creating bank2" << endl << "Adding $1479.99 to bank2" << endl << "Adding $12.87 to bank2" << endl;
	bank2.deposit(1479, 99);
	bank2.deposit(12, 87);
	bank2.showBalance();

	cout << "Withdrawing $100.50 from bank2" << endl;
	bank2.withdrawal(100,50);
	cout << "Attempting to withdraw $1400 from bank2" << endl;
	bank2.withdrawal(1400, 0);
	bank2.showBalance();
}

SavingsAccount::SavingsAccount()
{
	dollars = 0, cents = 0;
}

void SavingsAccount::deposit(int d, int c)
{
	dollars += d;
	int remain = 0;
	
	cents += c;

	if (cents > 99)
	{
		remain = cents / 100;

		cents -= (100*remain);
		
		dollars += remain;
	}
	
	
}

void SavingsAccount::withdrawal(int d, int c)
{
	dollars -= d;
	int remain = 0;
	int set =0; 
	
	if (cents == 0 || cents - c <0)
	{
		
		cents = 100 - c;
		
		dollars -= 1;
		 set = 1;
	}
	else
	{cents -= c;
	}
	
	if (dollars < 1)
	{
		cout << "You have insufficient funds.";
		dollars += d;

		if (set == 1)
		{
			dollars += 1; cents += (100-c);
		}

		cents += c;
	}
	
}


SavingsAccount::SavingsAccount(int d, int c)
{
	dollars = d, cents = c;
}

void SavingsAccount::showBalance()
{
	cout << "Dollars = " << dollars << ". Cents = " << cents << endl;
}

// main goes here. Code that *uses* the Mortgage class
// goes in this file

#include <iostream>
#include "Mortgage.h"
#include <iomanip>

using namespace std;

int main()
{
	double loan, rate, payment, fullPayment;
	int years;
	bool bFail;
	Mortgage house;

	// Runs a do while loop if the user enters bad data, either negative values or non-number values
	do
	{
		cout << "How much are you being loaned? ($) ";
		cin >> loan;
		bFail = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (!bFail)
		{
			if (loan < 0)
			{
				cout << "Loan value cannot be negative\n";
				bFail = true;
			}
		}
	} while (bFail);
	house.setLoan(loan);

	// Runs a do while loop if the user enters bad data, either negative values or non-number values
	do
	{
		cout << "What is the annual interest rate? (%) ";
		cin >> rate;
		bFail = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (!bFail)
		{
			if (rate < 0)
			{
				cout << "Rate value cannot be negative\n";
				bFail = true;
			}
		}
	} while (bFail);
	house.setRate(rate);

	// Runs a do while loop if the user enters bad data, either negative values or non-number values
	do
	{
		cout << "How many years before the loan needs to be paid back? ";
		cin >> years;
		bFail = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (!bFail)
		{
			if (years < 0)
			{
				cout << "Years cannot be negative\n";
				bFail = true;
			}
		}
	} while (bFail);
	house.setYears(years);

	payment = house.setPayment();
	fullPayment = house.setFullPayment();
	cout << endl << "================================" << endl;
	cout << "Your monthly payments are: $" << fixed << setprecision(2) << payment << " a month\n";
	cout << "The total payment will be: $" << fixed << setprecision(2) << fullPayment << " after " << years << " years";
	cout << endl << "================================" << endl;

	cout << endl; system("pause"); return 0;
}
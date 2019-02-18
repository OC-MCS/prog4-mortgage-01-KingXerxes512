// main goes here. Code that *uses* the Mortgage class
// goes in this file

#include <iostream>
#include "Mortgage.h"
#include <iomanip>

using namespace std;

int main()
{
	double loan;
	double rate;
	int years;
	double payment;
	double fullPayment;
	Mortgage house;

	cout << "How much are you being loaned? ";
	cin >> loan;
	while (loan < 0)
	{
		cout << "Loan value cannot be negative\n";
		cout << "Enter a valid loan value: ";
		cin >> loan;
	}
	house.setLoan(loan);
	cout << "What is the annual interest rate? ";
	cin >> rate;
	while (rate < 0)
	{
		cout << "Rate value cannot be negative\n";
		cout << "Enter a valid rate value: ";
		cin >> rate;
	}
	house.setRate(rate);
	cout << "How many years before the loan needs to be paid back? ";
	cin >> years;
	while (years < 0)
	{
		cout << "Years cannot be negative\n";
		cout << "Enter a valid years value: ";
		cin >> years;
	}
	house.setYears(years);
	payment = house.setPayment();
	fullPayment = house.setFullPayment(payment);
	cout << "Your monthly payments are: $" << fixed << setprecision(2) << payment << " a month\n";
	cout << "The total payment will be: $" << fixed << setprecision(2) << fullPayment << endl;

	cout << endl; system("pause"); return 0;
}
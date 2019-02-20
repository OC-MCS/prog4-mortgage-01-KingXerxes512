// implementation file for Mortgage class

#include "Mortgage.h"
#include <cmath>

// Sets the loan private data equal to the input parameter
void Mortgage::setLoan(double input)
{
	loan = input;
}

// Sets the loan rate to the decimal value of the percentage the user should enter as the parameter
void Mortgage::setRate(double input)
{
	rate = input / 100;
}

// Sets the number of years the loan will be drawn out over to the parameter
void Mortgage::setYears(int input)
{
	years = input;
}

// Returns the value of what the monthly payments will be
double Mortgage::setPayment()
{
	double term;
	term = pow((1 + (rate / 12)), (12 * years));
	payment = (loan * (rate / 12) * term) / (term - 1);
	return payment;
}

// Returns the value of what the full payment at the end of the loan period should be
double Mortgage::setFullPayment()
{
	fullPayment = payment * 12 * years;
	return fullPayment;
}
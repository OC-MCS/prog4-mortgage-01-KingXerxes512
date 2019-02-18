// implementation file for Mortgage class

#include "Mortgage.h"
#include <cmath>

void Mortgage::setLoan(double input)
{
	loan = input;
}

void Mortgage::setRate(double input)
{
	rate = input / 100;
}

void Mortgage::setYears(int input)
{
	years = input;
}

double Mortgage::setPayment()
{
	double term;
	term = pow((1 + (rate / 12)), (12 * years));
	payment = (loan * (rate / 12) * term) / (term - 1);
	return payment;
}

double Mortgage::setFullPayment(double payment)
{
	fullPayment = payment * 12 * years;
	return fullPayment;
}
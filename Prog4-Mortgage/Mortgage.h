#pragma once
// header file for Mortgage class
class Mortgage
{
private:
	double loan;
	double rate;
	int years;
	double payment;
	double fullPayment;
public:
	void setLoan(double);
	void setRate(double);
	void setYears(int);
	double setPayment();
	double setFullPayment(double);
	Mortgage()
	{
		setLoan(0);
		setRate(0);
		setYears(0);
		payment = 0;
		fullPayment = 0;
	}
};
#pragma once
#include "BankAccount.h"

class Savings : public BankAccount
{
private:
	double withdrawFee;
public:
	Savings();
	Savings(int a, double i, double b, int w);
	void GetInput();
	void Display();
	double Savings::CalculateInterestRate(double bal);
	double Savings::AssessInterest(double bal, double ir);
};

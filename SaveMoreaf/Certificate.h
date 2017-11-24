#pragma once
#include "BankAccount.h"
#include <string>

class Certificate : public BankAccount
{
private:
	int acctNumber;
	double interestRate;
	int balance;
	int term;
	double withdrawFee;
public:
	Certificate();
	Certificate::Certificate(int a, double i, double b, int t, double w);
	void GetInput();
	void Display();
	double Certificate::AssessTerm(double ir, int t);
	double Certificate::AssessInterest(double bal, double ir);
	double Certificate::WithdrawFee(double bal);
};
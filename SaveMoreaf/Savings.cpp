#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Savings.h"

using namespace std;

Savings::Savings() : BankAccount()
{
	withdrawFee = 2.00;
}

Savings::Savings(int a, double i, double b, int w) : BankAccount(a, i, b)
{
	withdrawFee = w;
}

void Savings::Display()
{
	cout << "" << endl; 
	cout << "[Savings Account Information]" << endl;
	cout << "Savings Account Number: " << acctNumber << endl;
	cout << "Savings Account Balance: $ " << balance << endl;
	cout << "Savings Account Interest Rate: " << interestRate << endl;
	cout << "Withdraw Fee: $ " << withdrawFee << endl;
	cout << "----------" << endl;
}

void Savings::GetInput()
{
	acctNumber = 7001;
	balance = 10000;
	interestRate = 0.01;
	withdrawFee = 2.00;


	interestRate = Savings::CalculateInterestRate(balance);
	balance = Savings::AssessInterest(balance, interestRate);
}

double Savings::CalculateInterestRate(double bal)
{
	double ir = 0;

	if (bal >= 10000)
	{
		ir = .02;
	}
	else
		ir = .01;
	return ir;
}

double Savings::AssessInterest(double bal, double ir)
{
	bal = ir / 12 * bal + bal;

	return bal;
}
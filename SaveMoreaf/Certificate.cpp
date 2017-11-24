#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Certificate.h"

using namespace std;

//Constructors
Certificate::Certificate() : BankAccount()
{
	interestRate = 0;
	withdrawFee = 0;
}

Certificate::Certificate(int a, double i, double b, int t, double w) : BankAccount(a, i, b)
{
	term = t;
	withdrawFee = w;
}

void Certificate::Display()
{
	cout << "" << endl;
	cout << "----Certificate of Deposit (CD) Info----" << endl;
	cout << "CD Account Number: " << acctNumber << endl;
	cout << "CD Balance: $ " << balance << endl;
	cout << "CD Interest Rate: " << interestRate << endl;
	cout << "Term: " << term << endl;
	cout << "Withdraw Amount: $ " << withdrawFee << endl;
	cout << "-----------------------------------------" << endl;
}

void Certificate::GetInput()
{
	acctNumber = 7001;
	balance = 15000;
	interestRate = 0.05;
	term = 3;


	interestRate = Certificate::AssessTerm(interestRate, term);
	balance = Certificate::AssessInterest(balance, interestRate);
	withdrawFee = Certificate::WithdrawFee(balance);
}

double Certificate::AssessTerm(double ir, int t)
{
	if (t >= 5)
	{
		ir = 0.1;
	}
	else
	{
		ir = .05;
	}
	return ir;
}

double Certificate::AssessInterest(double bal, double ir)
{
	bal = ir / 12 * bal + bal;

	return bal;
}

double Certificate::WithdrawFee(double bal) // 10% fee is added when funds are taken out before term is over
{
	bal = bal - bal * .10;

	return bal;
}
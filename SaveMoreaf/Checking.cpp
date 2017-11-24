#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Checking.h"

using namespace std;

//Constructors
Checking::Checking() : BankAccount()
{
	OrderChecks = 0; // checks are received here** 
}

Checking::Checking(int a, double i, double b, int c) : BankAccount(a, i, b)
{
	OrderChecks = c;
}

void Checking::Display()
{
	cout << "" << endl;
	cout << "----Checking Account Info----" << endl;
	cout << "Checking Account Number: " << acctNumber << endl;
	cout << "Checking Account Balance: $ " << balance << endl;
	cout << "Book of Checks: " << OrderChecks << endl;
	cout << "-------------------------------" << endl;

}

void Checking::GetInput()
{
	acctNumber = 7001;
	balance = 6000;
	interestRate = 0.2;
	OrderChecks = 15;

}

void Checking::OrderingChecks()
{
	cout << "There is a $15 fee for checks. The charged will be added to your checking account. \n" << endl;

	balance -= 15;

	BalanceCheck();
}


void Checking::BalanceCheck()
{
	if (balance < 500)
	{
		balance -= 5;

		cout << "You have incurred a penalty of $5 due to your balance being below $500. \n";
	}
}
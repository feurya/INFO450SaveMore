#pragma once
#include <string>

using namespace std;

class BankAccount
{
protected:
	int acctNumber;  //Default values
	double interestRate; //Default Values
	double balance;  //Default values

public:
	BankAccount();
	BankAccount(int a, double i, double b);
	virtual void GetInput() = 0;
	virtual void Display() = 0;

};
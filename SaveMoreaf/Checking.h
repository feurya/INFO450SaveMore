#pragma once
#include "BankAccount.h"

class Checking : public BankAccount
{
private:
	int OrderChecks;
public:
	Checking();
	Checking(int a, double i, double b, int c);
	void GetInput();
	void Display();
	void BalanceCheck();
	void OrderingChecks();
};
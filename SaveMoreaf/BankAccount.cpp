#include "stdafx.h"
#include <string>
#include "BankAccount.h"

using namespace std;

//Constructors
BankAccount::BankAccount()
{
	acctNumber = 0; //Default values
	interestRate = 0; // Default values
	balance = 0; //Default values

}

BankAccount::BankAccount(int a, double i, double b)
{
	acctNumber = a; //Intiates 
	interestRate = i;
	balance = b;
}



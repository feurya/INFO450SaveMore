// INFO450SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BankAccount.h"
#include "Checking.h"
#include "Savings.h"
#include "Certificate.h"
#include "stdio.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string answer = "";
	BankAccount *pBA = NULL;

	cout << "Welcome to Save More!\n";

	while (answer!= "e" || "E") 
	{
		cout << "\n Which account would you like to view:\nSelect (c) for Checking, (s) for Savings, (cd) for Certificate of Deposit, or (e) to exit the program.  ";
		getline(cin, answer);

		if (answer == "c" || answer == "C")  // Display Checkings Input 
		{
			pBA = new Checking();
			pBA->GetInput();
			pBA->Display();
		}
		else if (answer == "s" || answer == "S") // Display Savings Input
		{
			pBA = new Savings();
			pBA->GetInput();
			pBA->Display();
		}
		else if (answer == "cd" || answer == "CD") // Display Certificate Input
		{
			pBA = new Certificate();
			pBA->GetInput();
			pBA->Display();
		}
		else if (answer == "e" || answer == "E") // Used to exit the program
		{
			cout << "\nThank you for Saving More!\n " << endl;

			return 0;
		}
	}

	return 0;
}
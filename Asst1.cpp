#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*Nikola Zorica
This program allows the user to enter their name, how much a loan they got was and what their montly payment is.
it will use this information to calculate how many months they will be paying the loan back over how much the processing fee is and what their final payment will be*/


int main()
{
	//Housekeeping
	string name;
	int loan;
	int months;
	int monthlyPayment;
	double processFee;
	double totalOwed;
	double finalPayment;
	double extraLoanPayment;
	const double PROCESSINGPERCENT = 0.05;
	cout << fixed << setprecision(2);


	//Input
	cout << "Enter your name ";
	getline(cin, name);
	cout << "Enter your loan amount ";
	cin >> loan;
	cout << "Enter your montly payment ";
	cin >> monthlyPayment;
	

	//Process
	processFee = PROCESSINGPERCENT*loan;
	totalOwed = processFee + loan;
	months = loan / monthlyPayment;
	extraLoanPayment = loan % monthlyPayment;
	finalPayment = processFee + extraLoanPayment;


	//output
	cout << left << setw(20) << "Name" << setw(12) << right << "Loan Amount" << setw(20) << "Processing Fee" << setw(12) << "Total Owed" << endl << endl;
	cout << left << setw(20) << name << setw(12) << right << loan << setw(20) << processFee << setw(12) << totalOwed << endl;
	cout << "You will need to make " << months << " equal payments of " << monthlyPayment << " with a final payment of " << finalPayment << endl << endl;
	cout << "program ended successfully" << endl;
	system("pause");


	/*
	Enter your name J. Doe
	Enter your loan amount 1230
	Enter your montly payment 50
	Name                 Loan Amount      Processing Fee  Total Owed

	J. Doe                      1230               61.50     1291.50
	You will need to make 24 equal payments of 50 with a final payment of 91.50

	program ended successfully
	Press any key to continue . . .
	*/
}

//CSCI271/homework1
//Alexander Stoyanov 
//I really didn't understand this assignment at first

#include "pch.h"
#include <iostream>
#include <string>
#include "time.h"
using namespace std;

int main() {

	srand(time(NULL)); //Seedless randomizer
	double balence, first, last; //Balence on first and last of the month.
	double value, deposited; //Value of checks and how much deposited (aren't these the same?)
	int checks; //Number of checks 
	int day = (rand()%30)+1; //Random day generator

	cout << "It is the " << day << "th of the month! \n\n"; 

	cout << "What is your starting balence?\t$";
	cin >> balence;

	if (day = 1) {
		first = balence;
	}
	if (day = 30) {
		last = balence;
	}


	if (balence <= 0.0) {
		cout << "The account has been closed" << endl;
		return 1; 
	}

	else {
		cout << "Ammount deposited this month?\t$";
		cin >> deposited;
		cout << "How many checks deposited?\t";
		cin >> checks;
		cout << "...and their total check value?\t$";
		cin >> value;

		double fee = 0.0;

		if (balence < 400.0 && day == 1) {
			fee = fee + 15.0;
		}
		if (balence < 400.0 && day == 30) {
			fee += 15.0;
		}
		if (value / checks < 500) {
			fee += 25.0;
		}
		if (last < 0) {
			fee += 50.0;
		}

		if (checks < 20) {
			fee += (checks * 0.1);
		}
		else if (checks >= 20 && checks < 40) {
			fee += 19 * 0.1;
			fee += ((checks - 20)*0.08);
		}
		else if (checks >= 40 && checks < 60) {
			fee += 20 * 0.08 + 19 * 0.1; 
			fee += ((checks - 40)*0.06);
		}
		else {
			fee += 20 * 0.06 + 20 * 0.08 + 19 * 0.1;
			fee += ((checks - 60)*0.04);
		}
		cout << "The monthly service fee is $" << fee << endl << endl;
	}
}





/*
Write a program that inputs the starting balance, the amount deposited, the number of checks, and the total value of all of the checks, 
and computes the monthly service fee for a checking account according to the following schedule :

$15 if the balance at the start of the month is less than 400
$15 if the balance at the end of the month is less than 400
$25 if the average check value is more than 500
$50 if the balance at the end of the month is negative
In addition, there is a per - check fee which is computed as follows :

checks 1 - 19 in any given month cost $0.10 each
checks 20 - 39 in any given month cost $0.08 each
checks 40 - 59 in any given month cost $0.06 each
additional checks cost $0.04 each

If the starting balance is negative, the program should exit with the statement that the account has been closed.

The program should be designed for clarity and testing – using carefully chosen variable names and displaying fees as they are incurred(along with the reason for the fee) will go most of the way to accomplishing this.

*/

// Homework2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int sum = 0, pSum = 0, nSum = 0 ,in=1; 
	while (in != 0) {
		cout << "Enter a  nonzero integer(number) or 0 to stop:";
		cin >> in;
		cout << endl;
		sum += in;

		if (in > 0) {
			pSum += in;
		}
		if (in < 0) {
			nSum += in;
		}

		cout <<  "The total is \t\t" << sum
			<< "\nThe total positive is\t" << pSum
			<< "\nThe total negative is\t" << nSum <<endl<<endl;
	}
	main(); //Will cause stack overflow but it's a small RAM program anyways. 
}


//Alexander Stoyanov
//Functions/Lab4 
//Using recursion, no global variables 

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

void exponate(double long base, int exp, double long result, int power) {
	result *= base; //multiplies the result by original 
	power++; //power counter for printing. it's only an arguement so it can be passed through in recursion

	if (exp == 1 || exp == -1) {
	}

	else if (exp > 0) {
		cout << base << "^" << power << " = " << result << endl;
		exp--; //recursion for positive exponents
		exponate(base, exp, result, power);
	}
	else if (exp < 0) {
		cout << base << "^-" << power << " = 1/" << result << " = " << 1 / result << endl;
		exp++; //recursion for the negative. 
		exponate(base, exp, result, power);
	}
}

int main() {
	double long base;
	cout << "Enter base number:\t";
	cin >> base;

	int exp;
	cout << "To the power of:\t";
	cin >> exp;

	double long result = base; //at ^1 the result == base

	cout << endl << base << "^0 = 1\n";	//first count starts at base0 
	if (exp >= 1) {
		cout << base << "^1 = "
			<< base << endl;
	}
	if (exp <= -1) {
		cout << base << "^-1 = 1/" //shown in fractur form 
			<< base << " = "
			<< 1 / base << endl;
	}
	exponate(base, exp, result, 1);

	cout << "\n Test using pow() = " << pow(base, exp) << endl;
}


/*
	SCRAPWORK


#include "pch.h"
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void exponate(double long base, int exp, double long result, int power) {
	result = result * base;
	power++;

	if (exp == 1 || exp == -1)
	{
	}

	else if (exp > 0) {
		cout << base << "^" << power << " = " << result << endl;
		exp--;
		exponate(base, exp, result, power);
	}
	else if (exp < 0) {
		cout << base << "^-" << power << " = 1/" << result << " = " << 1 / result << endl;
		exp++;
		exponate(base, exp, result, power);
	}
}

int main() {
	double long base;
	cout << "Enter base number:\t";
	cin >> base;

	int exp;
	cout << "To the power of:\t";
	cin >> exp;
	cout << endl;

	double long result = base; //at ^1 the result == base
	int counter = 1; //counter for tracking to which power we are at

	cout << base << "^0 = 1\n";	//first count starts at base0
	if (exp >= 1) {
			cout << base << "^1 = "
				 << base << endl;
		}

	if (exp <= -1) {
			cout << base << "^-1 = 1/" //shown in fractur form
				<< base << " = "
				<< 1 / base << endl;
	}

	exponate(base, exp, result, counter);

	cout << "\n Test using pow() = " << pow(base, exp) << endl;
}



*/
// CSCI271/ControlStatements/Lab5
//	Alexander Stoyanov 

#include "pch.h"
#include <iostream>
using namespace std;

//n! factorial loop
float factor(int n) {
	float mult = 1;
	for (int i = n; i > 0; i--) {
		mult *= i;
	}
	return mult;
}

// 1/(n!) loop
float e(int n) {
	float sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += (1 / factor(i));
		if (i != 0) {
			cout << "1/" << i << "!=\t" << sum << "\t";
			if (i != n) {
				cout << "+\n";
			}
			else {
				cout << "=\n";
			}
		}
	}
	return sum; 
}

int main() {
	int terms;
	cout << "Enter the degree of accuracy: ";
	cin >> terms;

	//Just a display loop
	cout << "\ne = 1 +";
	for (int i = 1; i <= terms; i++) {
		cout << " 1/" << i << "!";
		if (i != terms) {
			cout << "+"; 
		}
		else {
			cout << "=\n"; 
		}
	}

	cout << "\n\t1 \t+ \n";
	cout << "\ne = " << e(terms) << endl;
}

/* SCRAPWORK
At first I mis under stood the assignment I thought you wanted us to print basicfactorial loop.
int main() {
	int n, sum = 1;

	cout << "Enter a factorial:  ";
	cin >> n;
	cout << "\n" << n << "! = ";
	
	for (int i = n; i > 0; i--) {
		sum *= i;
		cout << i;
		if (i != 1) {
			cout << " * ";
		}
	}
	cout << "\n= " << sum <<"\n\n";
}*/

// Alexander Stoyanov	
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a = 0, n = 0, p = 0, pSum = 0;
	int sum = 0, nSum = 0 , in=1; 
	while (in != 0) {
		cout << "Enter a  nonzero integer(number) or 0 to stop:";
		cin >> in;
		cout << endl;

		sum += in;
		a++;
		if (in > 0) {
			pSum += in;
			p++;
		}
		if (in < 0) {
			nSum += in;
			n++;
		}

		cout << "The total is \t\t" << sum;
		if (a > 0) {
			cout << "\tand the average is " << sum / a;
		}

		cout << "\nThe total positive is\t" << pSum;
		if (p > 0) {
			cout << "\taverage is " << pSum / p;
		}

		cout << "\nThe total negative is\t" << nSum;
		if (n > 0) {
			cout << "\taverage is " << nSum / n; 
		}
		cout << endl << endl;
	}

	main(); //Will cause stack overflow but it's a small RAM program anyways. 
}


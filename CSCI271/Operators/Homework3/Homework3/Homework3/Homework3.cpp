/* CSCI271/Operators/homework3
Alexander Stoyanov
Homework 3
10.18.2018
*/

#include "pch.h"
#include <iostream> 
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);

	int c; //Total number of terms 
	int n = 0; //counter
	double total = 0; //sum of each term
	double term; //each term
	int column = 3; // column counter

	cout << "Enter the number of terms: ";
	cin >> c; //User input

	while (n < c) {
		int a = std::pow(-1, n); //I tried -1^n but I kept getting -1.0000000 or 0.000000 
		double b = (2 * n + 1);
		double term = a / b;
		cout << n << "\t"; //prints which term it is
		n++; //moves to next term

		//cout << term << "\t"; 
		//I was going to include each term but it was ruinning the column. Uncomment to see each term.

		total += term; //computes total from each term
		cout << total << "\t";

		//column maker 
		column--;
		if (column == 0) {
			column += 3;
			cout << "\t" << endl;
		}
	}
	cout << "\n\n Pi/4 is " << atan(1); //Pi for comparison/ 
	cout << "\t Difference is " << total - atan(1);
	cout << "\t Precent Difference is " << (total - atan(1)) / atan(1) << "%\n\n\n";
	return 0;
}

/*

	SCRAPWORK

class Total {

};

float adder(float adder, float total) {
	//float total = 0.0;
	 total +=  adder;
cout << total << endl;
return 0;
};

/*
double makeResult(int n, float total) {
	float result = 0.0;
	//int a = ((-1) ^ n); kept getting results of -1.000 -2.000...
	int a = std::pow(-1, n); //had to
	float b = (2 * n + 1);
	float term = a/b ;
	//result = result + term;
	//double result = ((-1) ^ n) / (2 * n + 1); kept getting

	cout << n << " \t ";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);
	cout << term;
	adder(term, total);
	 //cout << endl;
		return result;
}*/


/*
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

/*
class Total {

};

float adder(float adder, float total) {
	//float total = 0.0;
	 total +=  adder;
cout << total << endl;
return 0;
};

/*
double makeResult(int n, float total) {
	float result = 0.0;
	//int a = ((-1) ^ n); kept getting results of -1.000 -2.000...
	int a = std::pow(-1, n); //had to
	float b = (2 * n + 1);
	float term = a/b ;
	//result = result + term;
	//double result = ((-1) ^ n) / (2 * n + 1); kept getting

	cout << n << " \t ";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);
	cout << term;
	adder(term, total);
	 //cout << endl;
		return result;
}

int main() {
	double c; //count
	double n = 0.0; //counter
	double total = 0;
	//float result;
	cout << "Enter a number to test: ";
	cin >> c; //User input


	//int n = 5;
	//int result = ((-1)^n)/(2n+1)

	for (n = 0; n < c; n++) {
		//cout << n;
		//makeResult(n, total);
		//float total = adder();
		//cout << result << endl;

		//float result = 0.0;
		//int a = ((-1) ^ n); kept getting results of -1.000 -2.000...
		int a = std::pow(-1, n); //had to
		double b = (2 * n + 1);
		double term = a / b;
		//result = result + term;
		//double result = ((-1) ^ n) / (2 * n + 1); kept getting

		cout << n << " \t ";
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(6);
		cout << term;


		total =+ term;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(6);
		cout << "\t"<< total << endl;



		//adder(term, total);
		//cout << endl;
		//return result;

	}
	double pi4 = atan(1);
	cout << "\n" << pi4;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

*/
//CSCI271\ControllStatements\Lab4
//Alexander Stoyanov
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	float principle, rate, origPrin;

	cout << "Enter Starting Balence: ";
	cin >> principle;
	origPrin = principle; //since principle will change

	cout << "Enter interest rate (%): ";
	cin >> rate;
	rate = rate / 100; //Converts percent to Decimal
	rate++; //(1+r) early

	int years;
	cout << "For how many years? "; 
	cin >> years; 

	cout<<fixed<<setprecision(2); //To 2 decimal places 

	double a = principle * pow(rate, years);//For testing
	cout << "\nCalculated results after " << years << " years: $" << a << endl << endl;

	cout << "Year \tBalance \tTotal Growth \tYearly Growth "<< endl << endl;

	float yearsGrowth = 0.0; //For the Change in Growth year to year

	for (int n = 1; n <= years; n++) {
		principle = principle * rate; //New Total
		yearsGrowth = (principle - origPrin) - yearsGrowth;

		cout << n << "\t$" << principle<< " \t$" 
			<< (principle - origPrin)<< " \t$" 
			<< yearsGrowth << endl;
	}
}


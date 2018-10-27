/*
Alexander Stoyanov
Exersise 
https://wildart.github.io/CSCI271/docs/Input-Output-and-Operations.html

*/
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float fat, cal;
	
	cout << "Number of Calories:";
	cin >> cal;
	cout << "Fat Grams: ";
	cin >> fat;

	float fatCal = (fat * 9);
	float percentFat = (fatCal / cal)*100;

	cout << "Total Calories: " << cal
		<< "\t Calories from Fat: " << fatCal
		<< "\t Percent Fat:" << percentFat << "%\n" << endl;

	if (percentFat <= 30) {
		cout << "LowFat!\n"; 
	}
	main(); 
}
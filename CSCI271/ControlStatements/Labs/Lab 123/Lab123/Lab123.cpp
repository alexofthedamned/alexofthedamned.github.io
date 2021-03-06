/* CSCI271 ControlStatements Labs 1 2 & 3
Alexander Stoyanov 

*/

#include "pch.h"
#include <iostream>
using namespace std; 

int main()
{
	int small, big;
	cout << "\nThis program will display the squared and cubed results" 
		<< "of any integer in the range given \n\n";
	cout << "Enter the minimal length(cm):";
	cin >> small;
	cout << "Enter the maximum length(cm): ";
	cin >> big;

	cout << "\nUsing \"while\" loop \nSide\t Squared\t Cubed\n" ;
	int c = small; //c was count. 
	while (c <= big) {
		cout << c << " cm\t" << c * c << " cm^2\t" << c * c * c <<" cm^3\n";
		c++; //hah
	}

	cout << "\nUsing \"for\" loop \nSide\t Squared\t Cubed \n";

	for (int i = small; i <= big; i++) {
		cout << i << " cm\t" << i * i << " cm^2\t" << i * i*i << " cm^3\n";
	}
}


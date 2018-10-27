//CSCI271/Operators/Lab1 Pythagorean Triples
//Alexander Stoyanov

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	unsigned int x,y,h,l = 500; //l for limit
	for (x = 3; x <= l; x++) {
		for (y = 3; y <= l; y++) {
			for (h = 5; h <= l; h++) {
				if (
					y<x && //Comment/Uncomment this line to remove duplicates 
					h*h == x * x + y * y) {
					cout << x << "\t" << y << "\t" << h<< endl;
					//cout << x*x << " + " << y*y << " = " << h*h << endl<< endl;//Proofer
				}	//C Out
			}
		}
	}
}


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

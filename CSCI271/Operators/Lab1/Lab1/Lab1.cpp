// CSCI271/Operators/Lab 1 Pythagorean Triples
//	Alexander Stpyanov

#include "pch.h"
#include <iostream>
using namespace std;

int main() {

	int x, y, h, l = 500; //l for limit

	for (x = 3; x <= l; x++) {
		for (y = 3; y <= l; y++) {
			for (h = 5; h <= l; h++) {

				if (
					y < x && //Comment/Uncomment this line to remove duplicates 
					h*h == x * x + y * y) 
						{
					cout << x << "\t" << y << "\t" << h << endl;
					//cout << x*x << " + " << y*y << " = " << h*h << endl<< endl;//Proofer
				}	
			}
		}
	}
}
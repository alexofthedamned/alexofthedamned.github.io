#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int l = 500; //l for limit
	for (int x = 3; x <= l; x++) {
		for (int y = 3; y <= l; y++) {
			for (int h = 5; h <= l; h++) {
				if (
					y<x && //Comment/Uncomment this line to remove duplicates 
					h*h == x * x + y * y) {
					cout << x << "\t" << y << "\t" << h<< endl;
					//cout << x*x << " + " << y*y << " = " << h*h << endl<< endl;//Proofer
				}	
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

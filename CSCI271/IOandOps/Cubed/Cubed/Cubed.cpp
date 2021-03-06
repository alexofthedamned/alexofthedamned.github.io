/*
Alexander Stoyanov

Write a program that calculates the surface area and volume of cubes with face lengths of 1 to 10 cm.
Write an algorithm with a counter-controlled iteration.
Use tabs to print the following neatly formatted table of values:
*/
#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	cout << "Side\tSquared\tCubed\n";
	for (int i = 1; i < 11; i++) {
		cout << i << "cm\t" << i * i << "cm2 \t" << i * i * i << "cm3\n";
	}
}
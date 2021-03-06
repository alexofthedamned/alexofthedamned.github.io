// CalculatePi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/* 
Lab 2: Value of Pi
Estimating the value of Pi using Monte Carlo:

The idea is to simulate random (x, y) points in a 2-D plane with domain as a square of side 1 unit. We then calculate the ratio of number points that lied inside the circle and total number of generated points:

pi = 4*(circle_points/square_points)

Define a function which produces random number in interval [0,1]  [done] 
Use this function to perform evaluation of pi value 
 */

#include "pch.h"
#include <iostream>
#include <cmath>
#include <time.h>
 //#include <cstlib>
using namespace std;

//random number Generator 0 to 1
float random() {
	float r = (rand() % 10000);
	float random = r / 10000;
	return random;
}

//Creates a distance from the center using 2 pointss.
float randomRadius() {
	float x = random();
	float y = random();
	float fromRadius = sqrt(x*x + y * y); 
	return fromRadius;
}

float calcPi(float terms) {
	float inside = 0;
	float pi = 0;
	//for loop to check if inside circle
	for (float i = 1; i <= terms; i++) {
		float in = randomRadius();
		//if (x,y) is inside circle
		if (in <= 1) {
			inside++;
		}
		float pi = 4 * inside / i;
		cout << pi << "\t";
	}
	float finalPi = 4 * inside / terms;
	cout << "\n\n\nAfter " << (int)terms << "terms : Final Pi is " << finalPi;
	return finalPi;
}

int main() {
	srand(time(NULL));
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(5);

	int terms;
	cout << "Enter number of terms (atleast 100):\n";
	cin >> terms;

	float pi = calcPi(terms);
	float Pie = 3.14159;
	float difference = abs(Pie - pi);
	float percentDiff = (difference / Pie) * 100;

	cout << "\nPi is equal to 3.14159\n";
	cout << "The Difference is " << difference;
	cout << " and the Percent error is " << percentDiff << " %" << endl;
}


/*
#include "pch.h"
#include <iostream>
#include <cmath>
#include <time.h>
//#include <cstlib>
using namespace std;


//random number Generator 0 to 1
float random() {
	float r = (rand()%10000);
	float random = r / 10000;
	return random;
}


float insidePi() {

	//bool inside = false; 
	
	//float circle_points = random();
	//float square_points = random(); 

	float x = random();
	float y = random(); 
	float inPi = sqrt(x*x + y * y);

	//cout << x << y << inPi << endl;

	//if (inPi <= 1.00000) {
	//	inside = true;
	//}
	//else {
	//	inside = false;
	//}
	

	//float pi = 4.0 * (circle_points / square_points); 
	return inPi;
}

float calcPi(float n) {
	float inside = 0; 
	float pi = 0 ;
	
	for (float i = 1; i <= n; i++) {
		float in = insidePi();
		//cout << 
		if (in <= 1) {
			inside++;
		}
		//k++;

		//float subpi = inside / k; 
		float pi = 4 * inside / i;
		cout << pi <<  "\t";
		//return pi;
	}
	float pii = 4 * inside / n;
	cout << "\n\n\n Final Pi == " << pii; 

	return pii;

}


int main(){
	srand(time(NULL));
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(5);
	
	//float k = 1;
	//int n = 1000;
	float Pie = 3.14159;
	int terms;

	cout << "Enter number of terms (atleast 100):\n";
	cin >> terms;

	float pi = calcPi(terms);

	//cout << "Did pi work? " << pi; 
	float difference = Pie - pi; 
	float percentDiff = (difference / Pie) * 100 ; 



	cout << "\nPi is equal to 3.14159\n" ;
	cout << "After " << terms << " terms:  ";
	cout << " The difference is " << difference;
	cout << "and the Percent error is " << percentDiff << " %" <<endl;



	//float difference = Pie - pi;

	//int pi = 4 * inside / n; 
	//cout << pi << endl;
}
*/

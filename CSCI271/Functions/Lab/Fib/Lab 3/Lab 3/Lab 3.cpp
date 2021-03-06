//Alexander Stoyanov
//Functions/Lab3 Fibonacci recursive program

#include "pch.h" //Visual studio requirement, comment out to run code.
#include <iostream>
using namespace std;

int f, MAX, i = 0;

void Fibonacci(int f1, int f2) {
	i++;
	f = f1 + f2;
	cout << i << ":\t"
		<< f1 << " + \t"
		<< f2 << " = \t"
		<< f << endl;

	while (i < MAX) {
		Fibonacci(f2, f);
	}
}

int main() {
	cout << "How many terms? "; 
	cin >> MAX;
	Fibonacci(1, 1);
	cout << "\n\Fibinaci sequence after " << i 
		<< " iterations: " << f 
		<< endl << endl;
}

/*
==============================
		SCRAPWORK
============================

#include "pch.h"
#include <iostream>
using namespace std;

//int f = 0;
//int fm1 = 1;
//int fm2 = 1; 

/*
int f;
int fm1; 
int fm2;
int i;

//Fibinacci();
int f, MAX, i = 0;


void Fibonacci(int f1, int f2) {
	i++;
	f = f1 + f2;
	cout << i << ":\t" 
		<< f1 << " + \t" 
		<< f2 << " = \t"
		<< f << endl; 

	//f = (fm1 + fm2); 
	//f += fm2;
	//fm2 = fm1; 
	//cout << fm1 << " + " << fm2 << " = " << f << endl;
	
	while (i < MAX) {
		Fibonacci(f2, f);
	}
}

int main()
{
//  v~~~ Stack over flow preventatve 
	//while (f < 500) {
	cout << "How many terms? ";
	cin >> MAX; 
		Fibonacci(1,1);
		cout << "\n\Fibinaci sequence after "<< i << " iterations: " << f; 
	//}
} */
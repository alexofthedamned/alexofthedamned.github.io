#include "pch.h"
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	int a, b;
	cout << "Enter a number: \t";
	cin >> a;
	cout << "Enter another number: \t";
	cin >> b;

	cout << "\nThe Greatest Common Denominator of "
		<< a << " and " << b << " is "
		<< gcd(a, b) << endl;
}

/*
 *
 * Scrapp Work
 *
 * #include <iostream>
using namespace std;

int gcd (int a, int b){
	if (b==0){
		cout << endl;
		return a;
		cout << a;
	}
	int c = a%b;
	cout << endl <<a << "&" << b << " = " << c;
	return gcd(b, a % b);
}

int main() {

	int a, b;
	cout << "Enter a number: \t";
	cin >> a;
	cout << "Enter another number: \t";
	cin >> b;

	cout << "\nGCD of " << a << " and "<< b << " is \n" << gcd(a,b);
	return 0;

	//int main();
}
 *
 */
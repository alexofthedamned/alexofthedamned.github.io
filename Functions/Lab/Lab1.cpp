#include "pch.h"
#include <iostream>
#include
using namespace std;

void craps(int roll, int sum) {
	
	if (roll == 1 && sum == 7 || 11) {
		cout << "Winner!";
	}
	else if (roll == 1 && sum == 2 || 3 || 12) {
		cout << "Craps! You lose\n";
	}
	else if (sum = 4 || 5 || 6 || 8 || 9 || 10) {
		point += sum;
	}
}

int main() {
	craps(1, 2)
	
	ruturn 0;
}
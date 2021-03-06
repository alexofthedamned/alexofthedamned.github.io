#include "pch.h"
#include <iostream>
#include<time.h>
//#include <random>
using namespace std;

//Random Diceroll Generator
int rollDice() {
	int die1 = (rand() % 6) + 1;
	int die2 = (rand() % 6) + 1; //+1 to avoid 0s
	int dice = die1 + die2;
	cout << "Rolling! " << die1 << " and " << die2 << " =  " << dice << endl;
	return dice;
}

void keepRolling(int point) {
	int roll = rollDice();
	if (roll == 7) {
		cout << "\n!CRAPS! SEVEN! \t Point was  " << point << endl;
	}
	else if (point == roll) {
		cout << "\n!YOU WIN! \t Point was " << point << endl;
	}
	else {
		keepRolling(point);
		//Recursively Call itself until other 2 are satisfied 
	}
}

void firstRoll() {
	int first = rollDice();
	if (first == 7 || first == 11) {
		cout << "\n !SevenEleven! First Roll Winner!" << endl;
	}
	else if (first == 2 || first == 3 || first == 12) {
		cout << "\n !First Roll Craps! \t Rolled a " << first << endl;
	}
	else {
		cout << "\nPoint is " << first << "\n\n";
		keepRolling(first);
	}
}

int main() {
	srand(time(0));
	//For loop for fast testing
	for (int i = 1; i <= 10; i++) {
		cout << "Craps! Game: " << i << endl;
		firstRoll();
		cout << "================================\n";
	}
	return 0;
}


//scRAP WORK BELLOW
/*
===================================================
SCRAPWORK! 
DOES THE SAME AS PREVIOUS CODE 
BUT WITH ALL THE MISTAKES AND COMMENTS ATTACHED
===================================================

int rollDice() {
	int die1 = (rand() % 6) + 1;
	int die2 = (rand() % 6) + 1;
	int sum = die1 + die2;
	cout << "Rolling! "<< die1 << " and " << die2 << " = " << sum << endl;
	return sum;
}

void keepRolling(int point) {
//	if (point != 0) {
		int roll = rollDice();
		if (roll == 7) {
			cout << "\n!CRAPS! SEVEN! \t Point was  " << point << endl;
		}
		else if (point == roll) {
			//point = +sum;
			cout << "\n!YOU WIN! \t Point was " << point << endl;
		}
		else {
			keepRolling(point);
		}
//	}
}

void firstRoll() {
	int first = rollDice();
	//int point = 0;
	
	if (first == 7 || first == 11) {
		cout << "\n !SevenEleven! First Roll Winner!" << endl;
	}
	else if (first == 2 || first == 3 || first == 12) {
		cout << "\n !First Roll Craps! \t Rolled a " << first << endl;
	}
	else {
		//int point = first;
		cout << "\tPoint is " << first<< endl;
		//madePoint = true
		//craps(point);
		//Rolling(point);
		keepRolling(first);
	}
	//return point;
}


/*
void craps(unsigned int point) {
	//int sum = roll();
	//int point = 0;
	//bool win;
	//bool madePoint; 
	//int i = 0;
	//i++;

	//First Roll

	if (point == 0) {
		point = firstRoll();
	}
	

	if (point != 0) {
		Rolling(point);
	}
	

	//first = false;
	//i++;
	//Following Rolls

//}
//


/*
int main() {
	//srand(time(NULL)); 
	//bool first = true;

	for (int i = 1; i < 10; i++) {
		//bool first = true;
		//int point = 0;
		cout << "Craps! Game: " << i << endl;
		firstRoll();
		//craps(0);
		cout << "================================\n";
	}
		return 0;
}

*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

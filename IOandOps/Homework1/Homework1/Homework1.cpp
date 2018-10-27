/*
Write a program that inputs the starting balance, the amount deposited, the number of checks, and the total value of all of the checks, and computes the monthly service fee for a checking account according to the following schedule :

$15 if the balance at the start of the month is less than 400
$15 if the balance at the end of the month is less than 400
$25 if the average check value is more than 500
$50 if the balance at the end of the month is negative
In addition, there is a per - check fee which is computed as follows :

checks 1 - 19 in any given month cost $0.10 each
checks 20 - 39 in any given month cost $0.08 each
checks 40 - 59 in any given month cost $0.06 each
additional checks cost $0.04 each
If the starting balance is negative, the program should exit with the statement that the account has been closed.

The program should be designed for clarity and testing – using carefully chosen variable names and displaying fees as they are incurred(along with the reason for the fee) will go most of the way to accomplishing this.

*/

#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 
}


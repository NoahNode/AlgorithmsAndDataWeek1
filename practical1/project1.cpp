/*
* Name : practical1.cpp
* Purpose: To test the Account class
* Author : Your name here
* Version: 1.0
*/
#include "Account.h"
#include <iostream>
#include <string>
// means we don't have to prefix cout and endl with std::
using namespace std;
// Post: Print menu, accept user character input and return uppercase character
char getOption() {
	char option;
	cout << endl << "P-print, D-deposit, W-withdraw, O-overdraft, Q-quit: ";
	cin >> option;
	// toupper - standard C++ function to convert char to uppercase
	return toupper(option);
}
// Main method displays menu and processes user inputs until Quit option selected
int main() {
	float amount; // user input
	char option = getOption(); // get initial user option
	Account a{ "123456" }; // create test account
						   // sentinel controlled loop repeats until option is 'Q' (quit)
	while (option != 'Q') {
		// complete sentinel loop to process each possible menu option
	}
	cout << "Thank-you for using Account program" << endl;
	return 0;
}
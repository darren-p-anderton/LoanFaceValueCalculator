//A program by Darren Anderton
//This program will take an input of a loan amount, period, and interest rate to calculate the face amount
//This is a solution to Problem Solving with C++ 8th edition Chapter 2 Question 1
//The loan is a simple loan with no compounding interest, so this program is not very useful becuae that does not exist

#include<iostream>

using namespace std;

float CalcFaceValue(float Amt, float Rate, float Period) {
	return (Amt * Rate * Period + Amt);
}

bool ExitInquiry(void) {
	char Ans;
	do {
		cout << "Would you like to calculate another face value? Y/N: "; cin >> Ans; cout << endl;
		if (Ans == 'Y') return 0;
		if (Ans == 'N') return 1;
	} while (Ans != 'Y' || Ans != 'N');
}

int main() {
	bool Exit;
	float loanedAmt, annRate, annPeriod, FaceValue;
	do {
		cout << "Please enter the dollar amount to be borrowed: "; cin >> loanedAmt; cout << endl;
		cout << "Please enter the annual interest rate: "; cin >> annRate; cout << endl;
		cout << "please enter the loan duration in years: "; cin >> annPeriod; cout << endl;

		annRate /= 100;

		FaceValue = CalcFaceValue(loanedAmt, annRate, annPeriod);
		cout << "The face value of this loan is:" << FaceValue << endl;

		Exit = ExitInquiry();

	} while (Exit == 0);
	return 0;
}
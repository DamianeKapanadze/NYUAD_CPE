// prob6.cpp : Defines the entry point for the console application.
//

/*****************************************/
/* Damiane Kapanadze dk4770 */
/* 15 Sep 2023 */
/* multiply two integer numbers with 8 and 16 and output the sum of numbers with bitwise shift and addition operations */
/*  */
/*****************************************/
#include "stdafx.h"
#include <iostream>

#define ExchangeRate 3.67

using namespace std;
/*
//ptoblem 6 a
int main()
{
	int a,b;
	
	cout << "input 2 numbers" << endl;
	cin >> a >> b;

	a = a << 3;
	b = b << 4;
	
	cout <<"a*8+b*16 = "<< a + b << endl;

	system("pause");
	return 0;
}
*/
/*





// problem 6 part b
int main(){
	int a, b;
	cout << "input 2 numbers" << endl;
	cin >> a >> b;

	cout << "a & b = " << (a & b) << endl;

	cout << "a | b = " << (a | b) << endl;

	cout << "!a = " << (!a) << endl;

	cout << "a ^ b = " << (a ^ b) << endl;

	system("pause");
	return 0;
}
*/


/*
//problem 7
#include <cmath>
#include <iomanip>

int main(){
	double loanAmount = 0, annualRate = 0, length = 0, monthlyRate = 0, monthlyPayment = 0;

	//cout.setf(ios::scientific);
	cout << "Enter Loan Amount"<<endl;
	cin >> loanAmount;
	cout << "Enter the annual interest rate percentage" << endl;
	cin >> annualRate;
	cout << "Enter loan length in years" << endl;
	cin >> length;
	cout << "Monthly payment is :";
	

	monthlyRate = annualRate / 1200;

	monthlyPayment = loanAmount*monthlyRate / (1 - pow((1 + monthlyRate), -length*12));

	cout << monthlyPayment << endl;


	system("pause");
	return 0;
}
*/



// case study

#define baseFee 12		//includes first 3.8 km
#define baseKm 3.8
#define kmPrice 1.82
#include <cmath>
int main(){
	double tipRate = 0, lenght, price;

	cout << "lenght and tip rate" << endl;
	cin >>lenght>> tipRate;

	lenght -= baseKm; //we need to calculate fee after we subtract the base milage included in the base fee 
	if (lenght < 0) lenght = 0;

	price = lenght*kmPrice + baseFee; // calculate the price

	price *= 1+ tipRate / 100; //calculate price with tip

	cout << price << endl;

	if ((int)ceil(price) % 5 != 0) //round up to closest integer
		price = ((int)(price / 5) + 1) * 5;

	cout <<"price based on the constrains "<< price<<endl;

	system("pause");
	return 0;
}

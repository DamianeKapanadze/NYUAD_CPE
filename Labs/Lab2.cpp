/******************************************/
/* Damiane Kapanadze, dk4770 */
/* 22 Sep 2023 */
/* CPE Lab2 */
/*****************************************/

/*
//Problem 1
#include <iostream> // Required for cout, cin, endl
//#include "Point.h" // Required for Point
using namespace std; // The compiler will use all the library filenames in std
// The main function - the starting point of our program
int main() {
	int myInt{ 0 };
	cin >> myInt;
	if (myInt % 2 == 0)
	{
		// finish the sentence
		cout << "You have entered an integer which is: even" << endl;
	}
	else
	{
		// finish the sentence
		cout << "You have entered an integer which is: odd" << endl;
	}
	// Wait to press return.
	cin >> myInt;
	// Exit program.
	return 0;
}
*/

//Problem 2
/*
Write a Boolean expression that evaluates true if the age is between 18 and 55 inclusively. Use an if
statement to write a complete program that prompts the user for his/her age and print “Transaction
accepted” if the age is within the interval
*/

/*
#include <iostream> // Required for cout, cin, endl
using namespace std; // The compiler will use all the library filenames in std
// The main function - the starting point of our program
int main() {
	int myAge{ 0 };
	cout << "Enter age" << endl;
	cin >> myAge;
	if (myAge >= 18 && myAge <= 55)
		cout << "Transaction accepted" << endl;
	else
		cout << "Transaction not accepted" << endl;

	// Wait to press return.
	system("pause");
	// Exit program.
	return 0;
}
*/

//Problem 3

/*
As activity directory at NYU, it is your job to suggest appropriate activities to guests based on the
weather:
 temp >= 80: swimming
 60 <= temp < 80: soccer
 40 <= temp < 60: volleyball
 temp < 40: skiing
Design a C++ program that prompts the user for a temperature, then prints out the activity appropriate for
that temperature. 
*/
/*
#include <iostream> // Required for cout, cin, endl
using namespace std; // The compiler will use all the library filenames in std
// The main function - the starting point of our program
int main() {
	int temp=0;
	cout << "Enter temp" << endl;
	cin >> temp;
	if (temp >= 80){
		cout << "swimming" << endl;
	}
	else if(60 <= temp && temp < 80){
		cout << "soccer" << endl;
	}
	else if (40 <= temp && temp < 60) {
		cout << "volleyball" << endl;
	}
	else {
		cout << "skiing" << endl;
	}


	// Wait to press return.
	system("pause");
	// Exit program.
	return 0;
}
*/

//Problem 4
/*
Write a C++ program that prompts the user to enter an integer and determines whether it is divisible by
2 and 3, whether it is divisible by 2 or 3, and whether it is divisible by 2 or 3 but not both.
*/

/*
#include <iostream>

using namespace std;

int main() {
	int a=0;
	cout << "enter number\n";
	cin >> a;
	if (a % 2 == 0 && a % 3 == 0) {
		cout << "divisibale by both: 2 and 3\n";
	}
	else if (a % 2 == 0 || a % 3 == 0) {
		cout << "It is divisible by one of them\n";
	}
	system("pause");
	return 0;
}
*/

//Problem 5 
//solve quadratic equation
/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a=0, b=0, c=0, d=0;
	cout << "Enter a, b, and c to solve quadratic equation: ax^2 + bx + c = 0\n";
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d == 0) {
		cout << "x = " << (-b + sqrt(d)) / (2 * a) << endl;
	}
	else if (d > 0) {
		cout << "x1 = " << (-b - sqrt(d)) / (2 * a) << endl;
		cout << "x2 = " << (-b + sqrt(d)) / (2 * a) << endl;
	}
	else cout << "No Real Solution\n";
	
	system("pause");
	return 0;
}
*/

//Problem 6 
/*
Design a software that prints a menu for the user to select which arithmetic operation to use (‘a’ for
addition, ‘s’ for subtraction, ‘m’ for multiplication, and ‘d’ for division. The software prompts the user for
two numbers and perform the selected arithmetic operation. The software should print “Invalid selection”
if the user choices any other charac
*/
/*
#include <iostream>

using namespace std;

int main() {
	char c=0;
	double a=0, b=0;

	cout << "Enter a, s, m, or d for addition, subtraction, multiplication, or division\n";
	cin >> c;

	switch (c) {
		case 'a':
			cin >> a >> b;
			cout << a + b << endl;
			break;
		case 's':
			cin >> a >> b;
			cout << a - b << endl;
			break;
		case 'm':
			cin >> a >> b;
			cout << a * b << endl;
			break;
		case 'd':
			cin >> a >> b;
			cout << a / b << endl;
			break;
		default:
			cout << "Invalid input\n";
			break;
	}
	system("pause");
	return 0;
}
*/

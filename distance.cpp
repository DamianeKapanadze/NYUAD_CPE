
/* Name: Damiane Kapanadze, Student Number: dk4770	*/

/* Date: 08/09/2023	*/

/* Program: distance.cpp	*/

/* Description: This program computes the distance between two points.	*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	/* Declare and initialize the variables */
	double x1, y1, x2, y2, length1, length2, distance;

	// Get the values of the points form the user
	cout << "Enter the x and y coordinates for the first point" << endl;
	cin >> x1 >> y1;
	cout << "Enter the x and y coordinates for the second point" << endl;
	cin >> x2 >> y2;

	/* Compute the sides of a right triangle */
	length1 = x2 - x1;
	length2 = y2 - y1;

	/* Compute the distance between the two points. */
	distance = sqrt(length1*length1 + length2*length2);

	/* Print the distance */
	cout << "The distance between the two points is " << distance << endl;
	system("pause");
	return (0);
}
/*
Damiane Kapanadze dk4770
CPE Lab3
*/


//problem 1

/*
#include <iostream>

using namespace std;

int main() {

	int count = 10;
	while (count > 0)
	{
		cout << count << endl;
		count--;
	}

	system("pause");
	return 0;
}
*/


//problem 2
/*
#include <iostream>

using namespace std;

int main() {
	int integer;
	cout << "Enter an integer between 0 and 120 (inclusively).\n";
	cin >> integer;
	while (integer < 0 || integer > 120)
	{
		cout << "Enter an integer between 0 and 120 (inclusively).\n";
		cin >> integer;
	}
	system("pause");
	return 0;
}
*/


//problem 3
/*
#include <iostream>

using namespace std;

int main() {
	int ctr1, ctr2;
	for (ctr1 = 1; ctr1 <= 6; ctr1 = ctr1 + 2)
	{
		for (ctr2 = 2; ctr2 <= 5; ctr2 = ctr2 + 3)
		{
			cout << "ctr1 = " << ctr1 << " , ctrl2 = " << ctr2 << endl;
		}
	}

	system("pause");
	return 0;
}
*/

//problem 4
/*
#include <iostream>

using namespace std;

int main() {
	int a, factorial = 1;
	do {
		cout << "Enter a nonnegative integer\n";
		cin >> a;
	} while (a < 0);

	for (int i = 2; i <= a; i++) {
		factorial *= i;
	}
	cout << factorial;

	system("pause");
	return 0;
}
*/


//problem 5
/*
#include <iostream>

using namespace std;

int main() {
	int x, sum = 0;
	for (int i = 1; i <= 10; ++i)
	{
		cin >> x;
		if (x > 10)
			break;
		sum += x;
	}
	cout << sum;

	system("pause");
	return 0;
}
*/


//problem 6 a
/*
#include <iostream>

using namespace std;

int main() {
	int a=0, s, g; // average , size, grade

	cout << "Enter classs size\n";
	cin >> s;

	for (int i = 0; i < s; i++) {
		cin >> g;
		a += g;
	}
	cout << "Class average is: " << (double)a / s << endl;

	system("pause");
	return 0;
}
*/

// problem 6 b
/*
#include <iostream>

using namespace std;

int main() {
	int a=0,s=0,g=0;
	
	while (true) {
		cout << "Enter a grade\n";
		cin >> g;
		if (g < 0) break;
		a += g;
		s++;
	}

	cout << "Class average is: " << (double)a / s << endl;

	system("pause");
	return 0;
}
*/


// problem 6 c
/*
#include <iostream>

using namespace std;

int main() {
	int a = 0, s = 0,g;

	cout << "Enter a grades\n";
	while (cin>>g) {
		a += g;
		s++;
	}

	cout << "Class average is: " << (double)a / s << endl;

	system("pause");
	return 0;
}
*/


//problem 7
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double acres=14000, uncut=2500, rate=0.02, years;
	
	cout << "Enter number of years\n";
	cin >> years;

	cout << setw(10)<< "Year" << setw(10) << "Reforested Acres\n";

	for (int i = 1; i <= years; i++) {
		if (uncut + uncut * rate > acres)
			uncut = acres;
		else 
			uncut += uncut * rate;
		cout <<setw(10)<< i << setw(10) << uncut<< endl;
	}
	
	system("pause");
	return 0;
}
*/

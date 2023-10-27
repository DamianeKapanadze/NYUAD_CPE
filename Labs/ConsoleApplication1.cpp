//Problem 1
/*
#include <iostream>

using namespace std;

int main() {
	int array[10];

	for (int i = 0; i < 10; i++) {
		array[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		cout << i << " " << array[i] << endl;
	}
}
*/


//problem 2
/*
#include <iostream>
#defien ArrSize 1000
using namespace std;

int main() {
	int array[ArrSize], n, sum=0;
	cin >> n;

	for (int i = 0; i < n-1; i++) {
		cin>>array[i];
		sum += array[i];
	}
	cout << ((n * (n + 1)) / 2) - sum<< " is missing\n";
	system("pause");
}
*/

//Problem 3
/*
#include <iostream>
#include <iomanip>
#define ArrSize 1000
using namespace std;
void histogram(int[], int);
void print(int);
int main() {
	int array[ArrSize], n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	
	histogram(array, n);
	system("pause");
}

void histogram(int array[], int size) {
	cout << setw(10) << "Element" << setw(10) << "Value" << setw(18) << "Histogram" << setw(10) << endl;;
	for (int i = 0; i < size; i++) {
		cout << setw(10) << i << setw(10) << array[i] << setw(10);
		print(array[i]);
	}
}
void print(int n) {
	for (int i = 0; i < n; i++) {
		cout << '*';
	}
	cout << endl;
}
*/

//Problem 4
/*
#include <iostream>
#define ArrSize 9

using namespace std;

int Search(char[], char);

int main() {
	char array[ArrSize], c;

	cout << "Input 9 chars\n";

	for (int i = 0; i < ArrSize; i++) {
		cin >> array[i];
	}

	cout << "Input key characher\n";
	cin >> c;

	cout << Search(array, c) << endl;;

	system("pause");
}

int Search(char array[], char c) {
	for (int i = 0; i < ArrSize; i++) {
		if (array[i] == c) return i;
	}
	return -1;
}
*/

//Problem 5 Doesn't work


#include <iostream>
#include <fstream>

#define ArrSize 101

using namespace std;

int get(char[], char[], int);

int main() {
	char ans[ArrSize], c = ' ';
	int n, i=0;
	ifstream fin("data.txt");

	if (fin.fail()) {
		cout << "didn't open\n";
		exit(-1);
	}
	
	fin >> n;
	while (c != '\n') {
		fin.get(c);
			if (c != ' ') {
				ans[i] = c;
				i++;
		}
	}

	int count = i;

	while (1) {
		int score = 0;
		fin >> n;
		if (fin.eof()) break;
		
		for (int i = 0; i < count-1; i++)
		{
			fin >> c;

			if (c == ans[i]) {
				score++;
			}
		}

		

		cout << n << " " << score << endl;
	}
	cout <<endl;

	//system("pause");
	return 0;
	
}




//Problem 6
/*
#include <iostream>
#include "problem6.h"

#define ArrSize 101
using namespace std;

int main() {
	int arr[ArrSize], n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "min "<< min(arr, n) << endl;
	cout << "max " << max(arr, n) << endl;
	cout << "ave " << average(arr, n) << endl;
	cout << "var " << variance(arr, n) << endl;
	cout << "dev " << STDeviation(arr, n) << endl;
}
*/
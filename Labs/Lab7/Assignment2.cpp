#include "2DArray.h"
#include <iostream>
#define SIZE 3
using namespace std;

void PrintArr(double[][SIZE]);
void PrintAll(double A[][SIZE], double B[][SIZE], double C[][SIZE]);

int main() {

	double A[3][3] = { {1, 0, 0}, {0,1,0}, {0,0,1} };
	double B[3][3] = { {1, 2, 3}, {1,2,3}, {1,2,3} };
	double C[3][3] = { {1, 2, 3}, {1,2,3}, {1,2,3} };

	int limit = 3;

	PrintAll(A, B, C);


	cout << isEqual(A, B, limit) << endl;

	Add(A, B, C, limit);
	cout << "Addition" << endl;
	PrintAll(A, B, C);

	Subtract(A, B, C, limit);

	cout << "Subtract" << endl;
	PrintAll(A, B, C);

	MultiplyByConstant(A, limit, C, limit);
	cout << "MultiplyByConstant 3" << endl;
	PrintAll(A, B, C);


	cout << IsDiagonal(A, limit) << endl;

	cout << IsIdentity(A, limit) << endl;

}

void PrintArr(double A[][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

void PrintAll(double A[][SIZE], double B[][SIZE], double C[][SIZE]) {

	cout << "A" << endl;
	PrintArr(A);

	cout << "B" << endl;
	PrintArr(B);

	cout << "C" << endl;
	PrintArr(C);
}

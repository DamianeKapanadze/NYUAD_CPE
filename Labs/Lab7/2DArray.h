//Assignment 2
#define MaxCol 3

bool isEqual(double A[][MaxCol], double B[][MaxCol], int limit);
void Add(double A[][MaxCol], double B[][MaxCol], double C[][MaxCol], int limit);
void Subtract(double A[][MaxCol], double B[][MaxCol], double C[][MaxCol], int limit);
void MultiplyByConstant(double A[][MaxCol], double b,	double C[][MaxCol], int limit);
bool IsDiagonal(double A[][MaxCol], int limit);
bool IsIdentity(double A[][MaxCol], int limit);



bool isEqual(double A[][MaxCol], double B[][MaxCol], int limit) {

	for (int i = 0; i < limit; i++) {
		for (int j = 0; j < limit; j++) {
			if (A[i][j] != B[i][j])
				return false;
		}
	}

	return true;

}

void Add(double A[][MaxCol], double B[][MaxCol], double C[][MaxCol], int limit){

	for (int i = 0; i < limit; i++) {
		for (int j = 0; j < limit; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

}



void Subtract(double A[][MaxCol], double B[][MaxCol], double C[][MaxCol], int limit) {

	for (int i = 0; i < limit; i++) {
		for (int j = 0; j < limit; j++) {
			C[i][j] = A[i][j] - B[i][j];
		}
	}

}

void MultiplyByConstant(double A[][MaxCol], double b, double C[][MaxCol], int limit){

	for (int i = 0; i < limit; i++) {
		for (int j = 0; j < limit; j++) {
			C[i][j] = A[i][j] * b;
		}
	}

}

bool IsDiagonal(double A[][MaxCol], int limit) {

	for (int i = 0; i < limit; i++) {
		for (int j = 0; j < limit; j++) {
			if (i != j && A[i][j] != 0)
				return false;
		}
	}

	return true;

}


bool IsIdentity(double A[][MaxCol], int limit) {

	for (int i = 0; i < limit; i++) {
		for (int j = 0; j < limit; j++) {
			if (i == j && A[i][j] != 1)
				return false;
			else if (i != j && A[i][j] != 0)
				return false;
		}
	}

	return true;

}

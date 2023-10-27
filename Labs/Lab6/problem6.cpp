#include <Cmath>
 
int min(int arr[], int size) {
	int min = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i] < arr[min]) min = i;
	}
	return arr[min];
}

int max(int arr[], int size) {
	int max = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i] > arr[max]) max = i;
	}
	return arr[max];
}

double average(int arr[], int size) {
	double sum = 0;
	for (int i = 1; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

double variance(int arr[], int size) {
	double avg = average(arr, size);
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += (arr[i] - avg) * (arr[i] - avg);
	}
	return sum / size;
}

double STDeviation(int arr[], int size) {
	double var = variance(arr, size);
	return sqrt(var);
}
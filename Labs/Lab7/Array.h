// Artrays are always passed by reference

#include <iostream>

void SortReplacement(int arr[], int size);
void BubbleSort(int arr[], int size);
void swap(int& a, int& b);
int linearSearch(int arr[], int size, int key);
int binarySeach(int arr[], int a, int b, int key);
void printArr(int arr[], int size);


void SortReplacement(int arr[], int size) {
	int min = 0;
	int index = 0;

	for (int i = 0; i < size - 1; i++) {
		for (int j = i; j < size - 1; j++) {
			if (arr[min] >= arr[j]) {
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		min = i + 1;
	}
}

void BubbleSort(int arr[], int size) {

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}


void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


int linearSearch(int arr[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key)
			return i;
	}
}


int binarySeach(int arr[], int a, int b, int key) {
	int avg = (a + b) / 2;

	if (arr[avg] == key)
		return avg;

	if (a == b)
		return -1;

	if (arr[avg] > key)
		return binarySeach(arr, a, avg, key);

	if (arr[avg] < key)
		return binarySeach(arr, avg, b, key);

}



void printArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
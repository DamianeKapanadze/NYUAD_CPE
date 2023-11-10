#include <iostream>

using namespace std;

void resize(int* arrPtr, int size1, int *arr2Ptr, int size2);


int main()
{
    int size1;
    cin >> size1;
    
    int *arrPtr = new int[size1];

    for (int i = 0; i < size1; i++) {
        cin >> arrPtr[i];
    }
    int size2;
    cout << "input new size\n";
    cin >> size2;
    int* arr2Ptr = new int[size2];

    resize(arrPtr, size1, arr2Ptr, size2);

    cout << "input additianl info\n";

    for (int i = size1; i < size2; i++) {
        cin >> arr2Ptr[i];
    }

    for (int i = 0; i < size2; i++) {
        cout << arr2Ptr[i]<<" ";
    }
    cout << endl;

    delete[] arrPtr;
    delete[] arr2Ptr;

    system("pause");
    return 0;
}

void resize(int* arrPtr, int size1, int* arr2Ptr, int size2) {
    for (int i = 0; i < size1; i++) {
        arr2Ptr[i] = arrPtr[i];
    }
}

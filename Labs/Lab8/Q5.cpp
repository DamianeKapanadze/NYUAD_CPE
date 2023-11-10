#include <iostream>
#include <fstream>

using namespace std;

int counter(int * tPtr, int* xPtr, int* yPtr, int size, int r);

int main()
{
    ifstream fin("data5.txt");

    if (fin.fail()) {
        cout << "error opening the file\n";
        exit(-1);
    }

    int size, r;

    cout << "Input radius of the circle\n";
    cin >> r;
    fin >> size;
    
    int* tPtr = new int[size];
    int* xPtr = new int[size];
    int* yPtr = new int[size];

    for (int i = 0; i < size; i++) {
        fin >> tPtr[i] >> xPtr[i] >> yPtr[i];
    }
    fin.close();

    cout << counter(tPtr, xPtr, yPtr, size, r) << endl;

    delete[] tPtr;
    delete[] xPtr;
    delete[] yPtr;

    system("pause");
    return 0;
}

int counter(int* tPtr, int* xPtr, int* yPtr, int size, int r) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (xPtr[i] * xPtr[i] + yPtr[i] * yPtr[i] < r * r) {
            count++;
            //cout << tPtr[i] << endl;
        }
    }
    //cout << endl;
    return count;
}

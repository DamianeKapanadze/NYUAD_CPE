#include <iostream>

using namespace std;

void swap(int *xptr, int *yptr);

int main()
{
    int a, b, size;
    
    cin >> size;

    int *p = new int[size];
    
    for (int i = 0; i < size;i++) {
        cin >> p[i];
    }


    cout << p[0] << endl;

    delete[] p;

    system("pause");
    return 0;
}


void swap(int *xptr, int *yptr) {
    int temp = *xptr;
    *xptr = *yptr;
    *yptr = temp;;
}


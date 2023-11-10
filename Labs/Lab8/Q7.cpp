#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Input amount of strings\n";

    cin >> size;

    char** arrPtr = new char* [size];

    for (int i = 0; i < size; i++) {
        string s;
        cin >> s;
        arrPtr[i] = new char[s.length()+1];

        for (int j = 0; j <= s.length(); j++) {
            *(*(arrPtr + i) + j) = s[j];
        }

    }
    cout << "-----------------------\n";

    for (int i = 0; i < size; i++) {
        int j = 0;
        while (arrPtr[i][j] != '\0') {
            cout << arrPtr[i][j];
            j++;
        }
        cout << endl;

    }


    for (int i = 0; i < size; i++) {
        delete[] arrPtr[i];
    }
    delete[] arrPtr;

    system("pause");
    return 0;
}

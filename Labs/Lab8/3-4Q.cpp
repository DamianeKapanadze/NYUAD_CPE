#include <iostream>

using namespace std;

void swap(int* xptr, int* yptr);
int char_count(char* ptr, char c);

int main()
{
    string s = "damiane";
    char c = 'a';

    char *sPtr = &s[0];

    cout<<char_count(sPtr, c)<<endl;

    system("pause");
    return 0;
}

//Question 3
void swap(int* xptr, int* yptr) {
    int temp = *xptr;
    *xptr = *yptr;
    *yptr = temp;;
}

//Question 4
int char_count(char* ptr, char c) {
    int i = 0, count = 0;
    while (1) {
        if (ptr[i] == '\0') {
            return count;
        }
        if (ptr[i] == c) {
            count++;
        }
        i++;
    }
}

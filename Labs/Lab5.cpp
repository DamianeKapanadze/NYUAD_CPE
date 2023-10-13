//Lab 5 Damiane Kapanadze dk4770        13 October 2023

#include <iostream>

using namespace std;

int timeInSeconds(int, int, int); // problem 1

string isPrime(int); // Problem 2

void TempConvertFromCelsius(); // Problem 3
double Cel_to_Fahr(double);
double Cel_to_Kel(double);

void Swap(int&, int&); //Problem 4

int guessing(int); // Problem 5

int fib(int); // Problem 6

int main()
{
    //Problem 5
    /*
    int num;
    srand((int)time(NULL));
    num = rand() % 10 + 1;
    cout << "int took you " << guessing(num) << " times to guess the number\n";
    */
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}

int timeInSeconds(int hour, int minute, int seconds) {
    return hour * 3600 + minute * 60 + seconds;
}

string isPrime(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) return "Not Prime";
    }
    return "Prime";
}

void TempConvertFromCelsius(){
    char s;
    double t;
    while (true) {
        cout << "enter f or k to convert to  Fahrenheit or Kelvin and enter temperatue in celsius\nenter q to quit\n";
        cin >> s;
        if (s == 'q') exit(0);        
        else {
            cin >> t;
            if (s == 'f') cout << Cel_to_Fahr(t) << endl;
            else if (s == 'k') cout << Cel_to_Kel(t) << endl;
        }
    }
}
double Cel_to_Fahr(double a) { return a * (9 / 5) + 32; }
double Cel_to_Kel(double a) { return a + 273.2; }


void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


int guessing(int num)
{
    int count = 0 , a;
    cout << "Guess number between 1 and 10\n";

    while (true) {
        count++;
        cin >>a;
        if (a == num) {
            return count;
        }
        else if (a >= num) {
            cout << "Your number is higher than expected\n";
        }
        else if (a <= num) {
            cout << "Your number is lower than expected\n";
        }
    }
}

int fib(int n) {
    if (n == 1 || n == 0) return n;
    else return fib(n - 1) + fib(n - 2);
}

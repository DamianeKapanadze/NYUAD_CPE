#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class Fraction {
private:
    int numerator, denominator ;

    int findGCD(int a, int b) {
        a = abs(a);
        b = abs(b);

        //swap so ais bigger than b
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }

        int remainder = a % b;
        if (remainder == 0)
            return b;
        else
            return findGCD(b, remainder);
    }
public:
    Fraction() {
        numerator = 0;
        denominator = 1;
    }

    Fraction(int num, int denom) {
        numerator = num;

        if (denom > 0) {
            denominator = denom;
        }
        else {
            cout << "Incorrect input for denominator\n";
        }

        //reduce
        int GCD = findGCD(numerator, denominator);
        numerator /= GCD;
        denominator /= GCD;
    }

    //setters
    void setNumerator(int i) { numerator = i; }
    void setDenominator(int i) {
        if (i > 0) {
            denominator = i;
        }
        else {
            cout << "Incorrect input for denominator\n";
        }

        int GCD = findGCD(numerator, denominator);
        numerator /= GCD;
        denominator /= GCD;
    }

    //getters
    int getNumerator() { return numerator; }
    int getDenominator() { return denominator; }
    void printFraction() {
        cout << numerator << "/" << denominator << endl;
    }

    //member functions

    void addition(int numer, int denom) {
        numer *= denominator;
        numerator *= denom;
        numerator += numer;
        denominator *= denom;

        //reduce
        int GCD = findGCD(numerator, denominator);
        numerator /= GCD;
        denominator /= GCD;
    }

    void subtraction(int numer, int denom) {
        this->addition(-numer, denom);
    }

    void multiplication(int numer, int denom) {
        numerator *= numer;
        denominator *= denom;

        //reduce
        int GCD = findGCD(numerator, denominator);
        numerator /= GCD;
        denominator /= GCD;
    }

    void division(int numer, int denom) {
        this->multiplication(denom, numer); 
    }


    void isZero() {
        if (numerator == 0)
            cout << "zero\n";
        else
            cout << "nonzero\n";
    }

    void isInt() {
        if (numerator % denominator == 0)
            cout << "int\n";
        else
            cout << "not int\n";
    }

    void equals(int numer, int denom) {
        int GCD = findGCD(numer, denom);
        numer /= GCD;
        denom /= GCD;

        if (numer == numerator && denom == denominator)
            cout << "equal\n";
        else
            cout << "not equal\n";
        
    }

    void greaterThan(int numer, int denom) {
        if ((double)numerator / denominator > (double)numer / denom) {
            cout << "saved fraction is more than than the given\n";
        }
        else if ((double)numerator / denominator < (double)numer / denom) {
            cout << "saved fraction is less than than the given\n";
        }
        else if ((double)numerator / denominator == (double)numer / denom) {
            cout << "saved fraction is equal to the given\n";
        }
    }

};

int main()
{
    Fraction f(4, 2);


    f.printFraction();
   

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int AccNo;
    double bal = 0;
    static int numOfAccounts;
    string owner = "";

public:
    Account() {
        numOfAccounts++;
        AccNo = numOfAccounts;
    }
    Account(string own, double balance) {
        numOfAccounts++;
        AccNo = numOfAccounts;
        owner = own;
        bal = balance;
    }

    //setters
    void setBalance(double d) { bal = d; }
    void setOwner(string s) { owner = s; }

    //getters 
    double getBalance() { return bal; }
    int getID() { return AccNo; }
    string getOwner() { return owner; }
    static int getNumOfAccounts() { return numOfAccounts; }

    //member function
    void withdraw(double i) {
        if (bal >= i) {
            bal -= i;
        }
        else {
            cout << "not enough money on the account\n";
        }
    }

    void deposit(double d) {
        bal += d;
    }

    void print() {
        cout << "A / C no : " << AccNo << "    Balanace = $" << bal << "    ower - "<< owner << endl;
    }

    
};


int Account::numOfAccounts = 0;


int main()
{
    Account a;

    a.deposit(50);

    a.print();

    return 0;
}

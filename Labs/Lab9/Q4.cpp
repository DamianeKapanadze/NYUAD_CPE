#include <iostream>
#include <cmath>

using namespace std;

class Account{
private:
	int AccountNumber = 0;
	double balance = 0;
public:
	//constructors
	Account() {	}
	Account(const int AN, const double b) {
		AccountNumber = AN;
		balance = b;
	}
	//setters

	void setBalance(const int b) {
		balance = b;
	}

	//getters
	const int getAccountNumber() { return AccountNumber; }
	const double getBalance() { return balance; }

	//member functions
	void credit(const int c) {
		balance += c;
	}
	void debit(const int d) {
		if (d > balance) {
			cout << "amount withdrawn exceeds the current balance!\n";
		}
		else balance -= d;
	}

	void print() {
		cout << "A / C no : " << AccountNumber << "    Balanace = $" << balance << endl;
	}
};


int main() {
	Account a;

	a.credit(500);

	a.print();

	a.debit(600);


	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

class Numbers {
private:
	int	r = 0, i = 0;

public:
	//constructors
	Numbers(){}
	Numbers(const int real, const int img) {
		r = real;
		i = img;
	}

	//setters
	void setComplex(const int real, const int img) {
		r = real;
		i = img;
	}
	void setReal(const int real) {
		r = real;
	}
	void setImaginary(const int img) {
		i = img;
	}

	//getter
	const int getReal() { return r; }
	const int getImaginary() { return i; }


	//member function
	bool isReal() {
		if (i == 0)
			return true;
		else
			return false;
	}

	bool isImaginary() {	
		if (r == 0 && i!=0	)
			return true;
		else
			return false;
	}

	void print() {
		cout << r << " + " << i << "i\n";
	}

};


int main() {
	Numbers n;

	n.setComplex(1, 1);
	n.print();

	return 0;
}

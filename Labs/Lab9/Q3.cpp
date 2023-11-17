#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
	int x = 0, y = 0;

public:
	
	//constructors
	Point() {}

	Point(const int X, const int Y) {
		x = X;
		y = Y;
	}

	//getters
	const int getX() { return x; }
	const int getY() { return y; }

	//setters
	void setX(const int X) { x = X; }
	void setY(const int Y) { y = Y; }
	void setXY(const int X, const int Y) {
		x = X;
		y = Y;
	}

	//member functions
	const double getMagnitude() { return sqrt(x * x + y * y); }

	const double getArgument() { return atan2( (double)y,  (double)x); }

	void print() { cout << x << " " << y << endl; }


};


int main() {
	Point p(1, 1);

	cout << p.getMagnitude() << endl;
	cout << p.getArgument() << endl;


	


	return 0;
}

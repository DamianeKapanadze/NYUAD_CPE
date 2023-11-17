#include <iostream>

using namespace std;

class Circle {
private:
	string color = "";
	double radius = 0;

public:
	//constructor
	Circle(double r, string c) {
		radius = r;
		color = c;
	}

	//setter
	void setRadius(double r) {
		radius = r;
	}
	void setColor(string c) {
		color = c;
	}

	//getter
	double getRadius() { return radius;}
	string getColor() { return color;}

	//memeber function
	double getArea() {
		return 3.1415 * radius * radius;
	}

};

int main() {

	Circle c(1, "red");
	
	cout << c.getArea() << endl;
	cout << c.getColor() << endl;

	c.setRadius(3);

	cout << c.getArea() << endl;

	return 0;
}

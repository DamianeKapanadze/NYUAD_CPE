#include <iostream>

using namespace std;

class Time {
private:
	int hour = 0, min = 0, sec = 0;

public:
	//constructor
	Time() {

	}
	Time(const int h, const int m, const int s) {
		if (h < 24 && h >= 0)
			hour = h;
		else
			cout << "Invalid hour, out of range\n";

		if (m < 60 && m >= 0)
			min = m;
		else
			cout << "Invalid minute, out of range\n";

		if (s < 60 && s >= 0)
			sec = s;
		else
			cout << "Invalid secods, out of range\n";
	}

	//getters
	const int getHour() { return hour; }
	const int getMinute() { return min; }
	const int getSecond() { return sec; }

	//setters
	void setHour(const int h) {
		if (h < 24 && h >= 0)
			hour = h;
		else
			cout << "Invalid hour, out of range\n";
	}
	void setMin(const int m) {
		if (m < 60 && m >= 0)
			min = m;
		else
			cout << "Invalid minute, out of range\n";
	}
	void setSec(const int s) {
		if (s < 60 && s >= 0)
			sec = s;
		else
			cout << "Invalid secods, out of range\n";
	}

	//member functions
	void setTime(const int h, const int m, const int s) {
		if (h < 24 && h>=0)
			hour = h;
		else
			cout << "Invalid hour, out of range\n";

		if (m < 60 && m>=0)
			min = m;
		else
			cout << "Invalid minute, out of range\n";
		
		if (s < 60 && s >= 0)
			sec = s;
		else
			cout << "Invalid secods, out of range\n";
		
	}

	void print() const {
		cout << hour << ":" << min << ":" << sec << endl;
	}

	void nextSec() {
		sec++;
		if (sec == 60) {
			sec = 0;
			min++;
			if (min == 60) {
				min = 0;
				hour++;
				if (hour == 24)
					hour = 0;
			}
		}
	}
};

int main() {

	Time t;

	for (int i = 0; i < 69; i++) {
		t.nextSec();

		t.print();

	}


	return 0;
}

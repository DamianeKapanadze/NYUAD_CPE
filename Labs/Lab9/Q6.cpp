#include <iostream>
#include <string>

using namespace std;

//player name, x-position, y-position, life score, and status(dead or alive)

class Player {
private:
	string name = "";
	int x_position = 0, y_position = 0, life_score = 0;
	bool isAlive = false;

public:
	//constructor
	Player(string s) {
		name = s;
		isAlive = true;
		life_score = 10;
	}

	//setters
	void setName(string s) {
		name = s;
	}
	void setScores(int i) {
		life_score = i;	
	}
	void moveToPosition(int x, int y) {
		x_position = x;
		y_position = y;	
	}
	void updateStatus(bool b) {
		isAlive = b;
	}

	//getters
	string getName() { return name; }
	int getX() { return x_position; }
	int getY() { return y_position; }
	int getLifeScore() { return life_score; }
	int getStatus() { return isAlive; }


	//member functions
	void hit() {
		life_score -= 2;
		if (life_score < 0) {
			isAlive = false;
		}
	}

};


int main() {
	Player p("shaurma"); 

	p.hit();
	p.hit();

	cout << p.getName() << " " << p.getLifeScore() << " "<< p.getStatus() << endl;

	return 0;
}

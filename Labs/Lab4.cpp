// Lab4.cpp
// Damaine Kapanadze dk4770
// October 6, 2023


//Problem 1
/*
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int a;
	ofstream fout("Numbers.txt");

	if (fout.fail())
	{
		cerr << "could not open output file checkedSensor.dat\n";
		exit(1);
	}
	
	
	cout << "Enter 10 integerst to store in the file\n";
	
	
	for (int i = 0; i < 10; i++) {
		cin >> a;
		fout << a << endl;
	}
	fout.close();


	cout << "Reading from the file\n";


	ifstream fin("Numbers.txt");

	if (fin.fail())
	{
		cerr << "could not open output file\n";
		exit(1);
	}


	for (int i = 0; i < 10; i++) {
		fin >> a;
		cout << a << endl;
	}
	fin.close();

	system("pause");
	return 0;
}
*/

//Problem 2
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
		int character = 0, words = 0, lines = 0, i = 0;;
	string s;

	ifstream fin("Numbers.txt");

	if (fin.fail()) {
		cout << "Couldn't open the file\n";
		exit(-1);
	}

	while (!fin.eof()) {
		getline(fin, s);
		character += s.length()+1;
		lines++;
	}
	character--;

	fin.close();
	fin.open("Numbers.txt");

	while (!fin.eof()) {
		fin >> s;
		words++;
	}
	fin.close();

	cout << character << " characters\n" << words << " words\n" << lines << " lines\n";

	system("pause");
	return 0;
}
*/


//Problem 3
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string s,a;

	cout << "input file name\n";
	cin >> s;

	ifstream fin(s);

	if (!fin) {
		cout << "Do you want to create the file?\n";
		cin >> a;
		if (a == "yes" || a == "Yes") {
			fin.close();
			ofstream fout(s);
			fout.close();
		}
	}
	 
	system("pause");
	return 0;
}
*/

//Problem 4
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string inp, outp;
	cout << "name of th einfup file:\n";
	cin >> inp;
	cout << "name of the output file:\n";
	cin >> outp;

	ifstream fin(inp);
	ofstream fout(outp);

	if (fin.fail() || fout.fail()) {
		cout << "error opening the files\n";
		exit(-1);
	}

	char ch;

	while (!fin.eof()) {
		fin.get(ch);
		fout << ch;
	}

	fin.close();
	fout.close();

	cout << "done\n";

	system("pause");
	return 0;
}
*/

//Problem 5
// time(s)	altitude(m) velocity(m/s) acceleration(m/s^2)
/*
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

double  gravity = -9.8, error = 0.65;
bool isFalling(double acc) {
	if (-9.8 * 1.65 <= acc && acc <= -9.8 * 0.68) {
		return true;
	}
	return false;
}

int main() {
	double n, prevH=0, h, t, vel, acc, stages;
	
	ifstream fin;
	fin.open("rocket1.txt");

	if (fin.fail()) {
		cout << "error reading the file\n";
		exit(-1);
	}

	//a
	fin >> n;

	for (int i = 0; i < n; i++) {
		fin >> t >> h >> vel >> acc;
		//cout << t << " " << h << " " << vel << " " << acc << endl;;
		if (vel<0) {
			cout << "rocket starts falling at " << t << " time";
			break;
		}
		prevH = h;
		if (i == n-1) {
			cout << "not falling yet\n";
		}
	}
	fin.close();
	
	//b
	fin.open("rocket2.txt");

	if (fin.fail()) {
		cout << "error reading file 2\n";
		exit(-1);
	}

	stages = 0;
	double prevacc = -1;
	while(true) {
		fin >> t >> h >> vel >> acc;
		if (t == -99) break;
		if (signbit(acc) != signbit(prevacc)) {
			stages++;
			if(acc>0)
			cout << "firing happens at time: " << t << endl;
		}
		prevacc = acc;
	}
	cout << "there were " << (stages)/2 << " stages\n";
	fin.close();

	//c
	fin.open("rocket3.txt");

	if (fin.fail()) {
		cout << "opening file 3 failed\n";
		exit(-1);
	}
	 prevacc = 0;
	 int count=0;
	while (!fin.eof()) {
		fin >> t >> h >> vel >> acc;

		if (isFalling(acc) != isFalling(prevacc)) {
			cout<<t<<" - ";
			count++;
		}
		if (count % 2 == 0) {
			cout << endl;
		}
		prevacc = acc;
		//cout << acc << endl;
		
	}
	fin.close();

	system("pause");
	return 0;
}
*/


//problem 6
/*
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	char c;

	ifstream fin("data.txt");
	ofstream fout("1data.txt");

	if (fin.fail()) {
		cout << "error reading the file\n";
		exit(-1);
	}

	while (!fin.eof()) {
		fin.get(c);
		if (c == '(') fout << "-";
		else if (c == '$') continue;
		else fout << c;
	}
}
*/

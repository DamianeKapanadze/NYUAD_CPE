#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    double sumX = 0, sumY = 0, sumXX = 0, sumXY = 0, a = 0, sal = 0, temp = 0, m = 0, b = 0, n = 0;

    cout << "Input 1, 2, or 3\n" << "(1) calculate the linear regression model using the data stored in the file\n" << "(2) calculate a freezing temperature given the water salinity using the linear model\n" << "(3) exit\n";

    ifstream fin("data.txt");

    if (fin.fail()) //open failed
    {
        cerr << "File data.txt could not be opened";
        exit(-1); //end execution of the program
    }


    while (true) {
        cin >> a;
        if (a == 1 || a == 2) {

            while (!fin.eof()) {
                n++;
                if (n == 1) {
                    string s;
                    getline(fin, s);
                }
                fin >> sal >> temp;
                cout << sal << " " << temp << endl;;
                sumX += sal;
                sumY += temp;
                sumXX += sal * sal;
                sumXY += sal * temp;
            }

            fin.close();
            m = (sumX * sumY - sumXY * n) / (sumX * sumX - n * sumXX);
            b = (sumX * sumXY - sumXX * sumY) / (sumX * sumX - n * sumXX);


            if (a == 1) {
                cout << endl;
                cout << m << " " << b << endl;
                break;
            }
            else if (a == 2) {
                cout << "Input Salinity Value\n";
                cin >> sal;
                cout << "Freezing temperature of water at " << sal << " salinity is: " << sal * m + b << endl;
                break;
            }
        }
        else if (a == 3) {
            exit(0);
        }
        else {
            cout << "Invalid input\n try again\n";
        }
    }

    system("pause");
    return 0;
}

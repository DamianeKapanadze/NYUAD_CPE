#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Declare variables to store various values
    double sumX = 0, sumY = 0, sumXX = 0, sumXY = 0, a = 0, sal = 0, temp = 0, m = 0, b = 0, n = 0;

    // Display options to the user
    cout << "Input 1, 2, or 3\n" << "(1) calculate the linear regression model using the data stored in the file\n" << "(2) calculate a freezing temperature given the water salinity using the linear model\n" << "(3) exit\n";

    // Open the file named "data.txt"
    ifstream fin("data.txt");

    // Check if file opening failed
    if (fin.fail()) {
        cerr << "File data.txt could not be opened"; // Print an error message
        exit(-1); // Terminate the program
    }

    // Loop to continuously prompt the user for input
    while (true) {
        cin >> a;

        //consider case 1 and 2
        if (a == 1 || a == 2) {
            // Loop to read data from the file
            while (!fin.eof()) {
                n++; // Count the number of data points
                if (n == 1) {
                    string s;
                    getline(fin, s); // Skip the first line if it contains headers
                }
                fin >> sal >> temp; // Read salinity and temperature values
                cout << sal << " " << temp << endl; // Print the values
                sumX += sal; // Accumulate sum of salinity
                sumY += temp; // Accumulate sum of temperature
                sumXX += sal * sal; // Accumulate sum of squared salinity
                sumXY += sal * temp; // Accumulate sum of salinity times temperature
            }

            fin.close(); // Close the file

            // Calculate slope (m) and y-intercept (b) of the linear regression line
            m = (sumX * sumY - sumXY * n) / (sumX * sumX - n * sumXX);
            b = (sumX * sumXY - sumXX * sumY) / (sumX * sumX - n * sumXX);

            if (a == 1) {
                cout << endl;
                cout << m << " " << b << endl; // Print the calculated slope and y-intercept
                break; // Exit the loop
            }
            else if (a == 2) {
                cout << "Input Salinity Value\n";
                cin >> sal; // Prompt user for salinity value
                cout << "Freezing temperature of water at " << sal << " salinity is: " << sal * m + b << endl; // Calculate and print freezing temperature
                break; // Exit the loop
            }
        }
        else if (a == 3) {
            exit(0); // Terminate the program
        }
        else {
            cout << "Invalid input\n try again\n"; // Display an error message for invalid input
        }
    }

    system("pause");
    return 0; 
}

/*********************************************************
Author: Damiane Kapanadze
Date Created: Otober 2, 2023
Description:
___________________________________________________
Assignment 1 - Computer Programming for Engineers
___________________________________________________
Civil Engineering Case Study – Freezing Temperature of Seawater:

The program reads the salinity and freezing temperatures from one file. It calculates linear regression model. It can print out the slope an y-intercept for the model, or calculate freezing temoperature for specific salinity inputed bu the user.
***********************************************************/

//Include Header Files
#include <iostream>
#include <fstream>
#include <string>

//use standard namespace
using namespace std;

//Main Function
int main()
{
    // Declare variables to store various values
    //inputs
    double a = 0, sal = 0, temp = 0;
    ifstream fin;
    string filename = "data.txt";
    //outputs
    double m = 0, b = 0;
    //other variables
    double sumX = 0, sumY = 0, sumXX = 0, sumXY = 0, n = 0;

    // Display menu options to the user
    cout << "Input 1, 2, or 3\n" << "(1) calculate the linear regression model using the data stored in the file\n(2) calculate a freezing temperature given the water salinity using the linear model\n(3) exit\n";
       
    //Infinite loop for repeating
    while (true) {
        //get choice from user
        cin >> a;

        //consider case 1 and 2 since that is the only time we need to read data from the file
        if (a == 1 || a == 2) {
            cout << "Input filename\n";
            cin >> filename;
            // Open the file named "data.txt"
            fin.open(filename);

            // Check if file opening failed
            if (fin.fail()) {
                cerr << "File "<<filename<<" could not be opened"; // Print an error message
                exit(-1); // Terminate the program
            }

            // Loop to read data from the file
            while (!fin.eof()) {
                n++; // Count the number of data points
                if (n == 1) {
                    string s;
                    getline(fin, s); // Skip the first line since it contains headers
                }
                fin >> sal >> temp; // Read salinity and temperature values
                sumX += sal; // Accumulate sum of salinity
                sumY += temp; // Accumulate sum of temperature
                sumXX += sal * sal; // Accumulate sum of squared salinity
                sumXY += sal * temp; // Accumulate sum of salinity times temperature
            }

            fin.close(); // Close the file

            // Calculate slope (m) and y-intercept (b) of the linear regression line
            m = (sumX * sumY - sumXY * n) / (sumX * sumX - n * sumXX);
            b = (sumX * sumXY - sumXX * sumY) / (sumX * sumX - n * sumXX);

            //case 1: calculate the linear regression model using the data stored in the file
            if (a == 1) {
                cout << m << " " << b << endl; // Print the calculated slope and y-intercept
                break; // Exit the loop
            }
            //case 2: calculate a freezing temperature given the water salinity using the linear model
            else if (a == 2) {
                cout << "Input Salinity Value\n";
                cin >> sal; // Prompt user for salinity value
                cout << "Freezing temperature of water at " << sal << " salinity is: " << sal * m + b << endl; // Calculate and print freezing temperature
                break; // Exit the loop
            }
        }
        //case 3: exit
        else if (a == 3) {
            exit(0); // Terminate the program
        }
        //invalid input
        else {
            cout << "Invalid input\n try again\n"; // Display an error message for invalid input
        }
    }

    system("pause");
    return 0; 
}

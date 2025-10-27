//author: Gabriel Cabezudo
//date: 10/26/2025
//This program prompts user for number of days and loops over the days and prompts user to enter the sales for each day. After each day of sales is captured, write a new line with the amount for the day to a file named week9_lab2.txt. on the last line, writes out the sum of all the entered daily sales.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    ofstream outFile("week9_lab2.txt"); //open file
    if (!outFile) { //check if file opened successfully
        cerr << "Error" << endl;
        return 1;
    }
    int numDays; //variable for number of days
    cout << "Enter the number of days: "; //prompt user for number of days
    cin >> numDays;

    double totalSales = 0.0; //variable to accumulate total sales

    for (int day = 1; day <= numDays; ++day) { //loop over number of days
        double sales; //variable for sales
        cout << "Enter sales for day " << day << ": $"; //prompt user for sales
        cin >> sales; 
        outFile << fixed << setprecision(2) << sales << endl; //write sales to file with 2 decimal places
        totalSales += sales; //add daily sales to total
    }
    outFile << "====================" << endl;
    outFile << "Total Sales: $" << fixed << setprecision(2) << totalSales << endl; //write total sales to file
    outFile << "====================" << endl;

    outFile.close(); //close file

    return 0;
}
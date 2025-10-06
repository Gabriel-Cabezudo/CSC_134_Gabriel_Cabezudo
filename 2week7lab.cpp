//author: Gabriel Cabezudo
//date: 10/5/2025
//This program prints a right triangle of starts using nested for loops. User inputs the number of rows.

//include library
#include <iostream>

//use standard namespace
using namespace std;

int main() {
    int rows;

    //prompt user for number of rows
    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    //outer loop for each row
    for (int i = 1; i <= rows; i++) {
        //inner loop for printing stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        //new line after each row
        cout << endl;
    }
    return 0;
}
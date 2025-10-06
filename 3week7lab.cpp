//author: Gabriel Cabezudo
//date: 10/5/2025
//This program prints a square pattern of asterisks using nested for loops. User inputs the side length of the square.

//include library
#include <iostream>

//use standard namespace
using namespace std;

int main() {
    int sideLength;

    //prompt user for side length of the square
    cout << "Enter the side length of the square: ";
    cin >> sideLength;

    //outer loop for each row
    for (int i = 1; i <= sideLength; i++) {
        //inner loop for printing asterisks in each row
        for (int j = 1; j <= sideLength; j++) {
            cout << "* ";
        }
        //new line after each row
        cout << endl;
    }
    return 0;
}
//author: Gabriel Cabezudo
//date: 10/5/2025
//This program prints a chessboard pattern of asterisks and spaces using nested for loops. User inputs the size of the chessboard.

//include library
#include <iostream>

//use standard namespace
using namespace std;

int main() {
    int size;

    //prompt user for size of the chessboard
    cout << "Enter the size of the chessboard: ";
    cin >> size;

    //outer loop for each row
    for (int i = 0; i < size; i++) {
        //inner loop for printing characters in each row
        for (int j = 0; j < size; j++) {
            //print asterisk for black spaces and space for white spaces
            if ((i + j) % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        //new line after each row
        cout << endl;
    }
    return 0;
}
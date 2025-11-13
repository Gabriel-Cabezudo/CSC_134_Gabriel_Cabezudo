//Gabriel Cabezudo 
//11/2/2025
//This code prompts the user to enter five integers, stores them in an array, and then displays them in reverse order

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Fixed number of integers
    int numbers[SIZE]; // Array to store integers

    // Prompt user to enter integers
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter integer " << i + 1 << ": ";
        while (!(cin >> numbers[i])) {
            cout << "Invalid input! Please enter an integer: ";
            cin.clear(); // Clear error flag
            cin.ignore(1000, '\n');  // Ignore invalid input
        }
    }

    //Display the array in reverse order
    cout << "The integers in reverse order are: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
//Gabriel Cabezudo
//11/2/2025
//This code prompts the user to enter five integers, stores them in an array, and then displays the maximum value among them

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;  // Fixed number of integers
    int numbers[SIZE];   // Array to store integers
    int maxValue;

    // Input: Prompt the user to enter integers
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter integer " << i + 1 << ": ";
        while (!(cin >> numbers[i])) {  // Input validation
            cout << "Invalid input! Please enter an integer: ";
            cin.clear();  // Clear the error flag
            cin.ignore(1000, '\n'); // Ignore invalid input
        }
    }

    // Processing: Find the maximum value
    maxValue = numbers[0];  // Assume first element is the max
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
        }
    }

    // Output: Display the maximum value
    cout << "The maximum value in the array is: " << maxValue << endl;

    return 0;
}
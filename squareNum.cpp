//Gabriel Cabezudo
//11/24/2025
//This program defines a function to calculate the square of a number

#include <iostream>
using namespace std;

int squareNumber(){
    int number;
    return number * number;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int squaredValue = squareNumber();
    cout << "The square of the number is: " << squaredValue << endl;
    return 0;
}
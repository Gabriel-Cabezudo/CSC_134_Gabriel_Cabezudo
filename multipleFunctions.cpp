//Gabriel Cabezudo
//11/24/2025
//This program defines multiple functions: one to calculate the square of a number and another to calculate the average of three integers. It then calls these functions from a third function

#include <iostream>
using namespace std;

int squareNumber(){
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    return number * number;
}

int averageValues() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    return (num1 + num2 + num3) / 3;
}

void multipleFuncs() {
    int squaredValue = squareNumber();
    cout << "The square of the number is: " << squaredValue << endl;
    int average = averageValues();
    cout << "The average is: " << average << endl;
}
int main() {
    multipleFuncs();
    return 0;
}
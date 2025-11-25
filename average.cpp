//Gabriel Cabezudo
//11/24/2025
//This program defines a function to calculate the average of three integers

#include <iostream>
using namespace std;

int averageValues() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    return (num1 + num2 + num3) / 3;
}

int main() {
    int average = averageValues();
    cout << "The average is: " << average << endl;
    return 0;
}

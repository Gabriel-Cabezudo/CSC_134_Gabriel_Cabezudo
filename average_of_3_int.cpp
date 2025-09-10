//Gabriel Cabezudo
//09/10/2025
//This program calculates the average of 3 integers

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //declare variables
    int num1, num2, num3;
    double average;
    //ask user for input
    cout <<"Enter three integers:";
    cin >> num1 >>num2 >> num3;
    //calculate average
    average= (num1 + num2 + num3) / 3;
    //print out the average
    cout << "The average of " << num1 << " , " << num2 << " , and " << num3 << " is: " << average << endl;

    return 0;
}
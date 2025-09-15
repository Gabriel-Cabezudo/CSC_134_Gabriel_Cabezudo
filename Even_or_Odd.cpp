//Gabriel Cabezudo
//09/14/2025
//This program determines if a number is even or odd using modulo operator

//include iostream library
#include <iostream>

//use standard namespace
using namespace std;

//main function
int main()
{
    int number;

    //prompt user for input
    cout << "Enter an integer: ";
    cin >> number;

    //determine if number is even or odd
    if (number % 2 == 0)
        cout << number << " is even." << endl;
        else
        cout << number << " is odd." << endl;

    return 0;

}

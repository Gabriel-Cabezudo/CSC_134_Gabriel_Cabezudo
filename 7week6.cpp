//author: Gabriel Cabezudo
//date: 10/1/2025
//This program accepts an interger input from the user and displays a multiplication table for that number

//include libary
#include <iostream>

//set standard namespace
using namespace std;

int main () 
{
    //initialize variables
    int userNum;
    int product;

    //ask user for input
    cout << "Enter an integer: ";
    cin >> userNum;

    //create for loop to loop 12 times and multiply the loop counter and user input variable
    for (int count = 1; count <= 12; count++)
    {
        product = userNum * count;
        cout << userNum << " * " << count << " = " << product << endl;
    }
    return 0;
}
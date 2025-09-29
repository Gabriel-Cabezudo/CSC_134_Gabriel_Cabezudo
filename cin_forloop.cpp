//author: Gabriel Cabezudo
//date: 09/28/2025
//This program accepts user input using cin and uses a for-loop to iterate over the interger and print out the number of iterations that occur.

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

int main()
{
    int userInput;

    //prompt the user for input
    cout << "Please enter an integer: ";
    cin >> userInput;

    //for loop that iterates from 0 to userInput
    for (int count = 0; count < userInput; count++)
    {
        //print out each iteration of the loop
       cout << "Iteration number: "<< count << endl;

    }
    return 0;

}
//author: Gabriel Cabezudo
//date: 09/28/2025
//This program uses an acculator to count the number of iterations in a for-loop

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

int main()
{
    int accumulator = 0;

    //for loop that counts from 0 to 10
    for (int count = 0; count < 100; count++)
    {
        //increment the accumulator by 1 for each iteration
        accumulator ++;

    }

    //print out the value of the accumulator
    cout << "The accumulator value is: " << accumulator << endl;

    return 0;

}
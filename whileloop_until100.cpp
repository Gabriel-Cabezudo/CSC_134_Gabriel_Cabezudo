//author: Gabriel Cabezudo
//date: 9/21/2025
//This program runs a while loop that loops until the 100th iteration, then stops.

//include necessary libraries
#include <iostream>

//use the standard namespace
using namespace std;

int main()
{
    //declare variables
    int counter=0; //accumulator


    //run the while loop until count is maxCount
    while (counter < 100)
    {
        counter++; //+1
    }

    cout << counter << " iterations were completed." << endl;
    return 0;
}
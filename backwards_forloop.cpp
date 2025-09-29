//author: Gabriel Cabezudo
//date: 09/28/2025
//This program loops backwards from 100 to 1 using a for-loop and prints each iteration of the loop using cout

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

int main()
{
    //for loop that counts backwards from 100 to 1
    for (int count = 100; count >= 1; count--)
    {
        //print out each iteration of the loop
        cout << "Iteration number: " << count << endl;

    }
    return 0;

}
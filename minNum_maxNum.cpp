//author: Gabriel Cabezudo
//date: 2024-06-20
//This program sets an int value named minNum to the value of 0 and manNum to 100. It uses a for-loop to print each number and its square to a table

//include iostream and math library
#include <iostream>
#include <cmath>

//use standard namespace
using namespace std;

main ()
{
    //declare variables
    int minNum, maxNum, num, count, square;
    minNum = 0;
    maxNum = 100;
    count = 0;

    //write forloop to print out numbers from minNum to maxNum and their squares in a table format
    cout << "Number | Number Squared " << endl;
        cout << "-----------------------" <<endl;
         for (num = minNum; num <= maxNum; num++)
    {
        
        square = pow(num, 2);
        cout << num << "         " << square << endl;
        count++;
    }
   
    return 0;
}
//author: Gabriel Cabezudo
//date: 2024-06-20

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
    for (num = minNum; num <= maxNum; num++)
    {
        cout << "Number: " << num << endl;
        square = pow(num, 2);
        cout << "Square: " << square << endl;
        count++;
    }
    return 0;
}
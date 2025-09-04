//@author: Gabriel Cabezudo
//@date: 08/27/2025
//This program calculates the quotient of a number divided by zero

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int num1 = 5;
    int quotient = num1 / 0;

    //this prints out the quotient of the two numbers from above.
    std::cout << quotient << std::endl;


    return 0;
}
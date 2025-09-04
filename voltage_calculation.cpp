//@author: Gabriel Cabezudo
//@date: 09/3/2025
//This program calculates the voltage given current and resistance

//include the iostream directive
#include <iostream>
#include <cmath>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    //declare variables
    double current = 10; // in amps
    double resistance = 2; // in ohms

    //calculate voltage
    double voltage = current * resistance;

    //print out the voltage
    std::cout << "The voltage is: " << voltage << " volts." << std::endl;

    return 0;
}
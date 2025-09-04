//@author: Gabriel Cabezudo
//@date: 09/3/2025
//This program calculates velocity given distance and time

//include the iostream directive
#include <iostream>
#include <cmath>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    //declare variables
    double velocity; // in miles per hour
    double time = 4; // in hours
    double distance = 400; // in miles

    //calculate velocity traveled
    velocity = distance / time;

    //print out the velocity traveled
    std::cout << "The velocity traveled is: " << velocity << " miles per hour." << std::endl;

    return 0;
    
}
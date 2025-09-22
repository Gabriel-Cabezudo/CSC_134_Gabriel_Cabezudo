//author: Gabriel Cabezudo
//date: 9/15/2025
//This program calculates the angle of a right triangle given the lengths of the opposite and adjacent sides.

//include necessary libraries
#include <iostream>
#include <cmath> //for atan and degrees conversion
#define _USE_MATH_DEFINES //for M_PI

//use the standard namespace
using namespace std;

int main()
{
    //declare variables
    double opposite, adjacent, angle;

    adjacent = 3; //length of adjacent side
    opposite = 4; //length of opposite side

    //calculate the angle in radians using atan2
    angle = atan2(opposite, adjacent); //atan2 returns the angle in radians

    //convert the angle to degrees
    angle = angle * (180.0 / M_PI); //convert radians to degrees

    //output the angle
    cout << "The angle of the right triangle is: " << angle << " degrees" << endl;

    // Use a tolerance for floating-point comparison
    if (fabs(angle - 53.13) < 0.01)
    {
        cout << "This is a 3-4-5 triangle." << endl;
    }
    else 
    {
        cout << "This is NOT a 3-4-5 triangle." << endl;
    }

    return 0;
}
//@author: Gabriel Cabezudo
//@date: 09/3/2025
//This program calculates the product of two numbers

//include the iostream directive
#include <iostream>
#include <cmath>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    //declare variables
    double velocity = 80; // in miles per hour
    double time = 2; // in hours
    double distance; // in miles

    //calculate distance traveled
    distance = velocity * time;

    //print out the distance traveled
    std::cout << "The distance traveled is: " << distance << " miles." << std::endl;

    return 0;
    
}
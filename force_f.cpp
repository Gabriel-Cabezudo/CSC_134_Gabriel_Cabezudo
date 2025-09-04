//@author: Gabriel Cabezudo
//@date: 09/3/2025
//This program calculates the force given mass and acceleration

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int mass = 10; // mass in kilograms
    int acceleration = 9.81; // acceleration in m/s^2
    int force = mass * acceleration; // force in Newtons
    
    //this prints out the force calculated from the mass and acceleration above.
    std::cout << force << std::endl;

    return 0;

}
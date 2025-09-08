//@author: Gabriel Cabezudo
//@date: 09/7/2025
//This program calculates and reports the new average temperature after a change in temperature if it rose by 2 percent

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    //original average July temperatures
    double nyctemp = 85.0; // in fahrenheit
    double denvertemp = 88.0; // in fahrenheit
    double phoenixtemp = 106.0; // in fahrenheit

    //calculate the new average temperatures after a 2 percent increase
    double newnyctemp = nyctemp * 1.02;
    double newdenvertemp = denvertemp * 1.02;
    double newphoenixtemp = phoenixtemp * 1.02;

    //print out the new average temperatures
    std::cout << "The new average July temperature in New York City is: " << newnyctemp << " degrees Fahrenheit" << std::endl;
    std::cout << "The new average July temperature in Denver is: " << newdenvertemp << " degrees Fahrenheit" << std::endl;
    std::cout << "The new average July temperature in Phoenix is: " << newphoenixtemp << " degrees Fahrenheit" << std::endl;

    return 0;
   
}
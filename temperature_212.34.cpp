//author: Gabriel Cabezudo
//date: 9/21/2025
//This program prompts user to enter a temperature until they enter 212.34 degree

//include necessary libraries
#include <iostream>

//use the standard namespace
using namespace std;

int main()
{
    //declare variables
    double temperature; //temperature entered by user
    const double targetTemperature = 212.34; //target temperature to stop the loop
    
    //prompt the user to enter a temperature
    do
    {
        cout << "Enter a temperature (enter 212.34 to stop): ";
        cin >> temperature;
    } while (temperature != targetTemperature);

    cout << "The temperature has been successfully set, thank you." << endl;
    return 0;
}

//author: Gabriel Cabezudo
//date: 09/14/2025
//This program determines if a year is a leap year or not

//include iostream library
#include <iostream>

//use standard namespace
using namespace std;

//main function
int main()
{
    int year;

    //promt user for input
    cout << "Enter a year: ";
    cin >> year;

    //determine if year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "The year you entered " << year << " is a leap year." << endl;
     }
    else 
        cout << "The year you entered " << year << " is NOT a leap year." << endl;

    return 0;

}
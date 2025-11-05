//Gabriel Cabezudo
//10/5/2025
//This program calculates and displays the projected membership fees for a country club over the next five years

#include <iostream>

using namespace std;

int main() 
{
    const double initialFee = 250000.0;
    const double increaseRate = 0.06;
    const int years = 5;
    double projectedFee = initialFee;

    cout << "Projected Membership Fees for the Next " << years << " Years:" << endl;

    for (int year = 1; year <= years; year++) 
    {
        projectedFee += projectedFee * increaseRate;
        cout << "Year " << year << ": $" << projectedFee << endl;
    }

    return 0;
}
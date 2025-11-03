//Gabriel Cabezudo'
//11/2/2025
// This program initialize a 1-D array with 5 integer values and sum those values and print the total to the console.

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = {10, 20, 30, 40, 50}; //initialize array with 5 integer values
    int sum = 0; //variable to hold the sum

    //loop through the array to sum the values
    for (int i = 0; i < SIZE; i++)
    {
        sum += numbers[i];
    }

    //print the total to the console
    cout << "The sum of the array is: " << sum << endl;

    return 0;

}

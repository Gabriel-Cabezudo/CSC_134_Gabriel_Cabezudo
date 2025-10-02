//author: Gabriel Cabezudo
//date: 10/1/2025
//This program asks user how many times they would like to roll a die and uses a for-loop to simulate rolling a die.

//include libraries
#include <iostream>

//set standart namespace
using namespace std;

main()
{
    int die = 0;
    int num = 0;

    //prompt user for input
    cout << "How many times would you like to roll the die?"; 
    cin >> num; 

    //roll the die
    for (die = num; die < num; die++ )
    {
        rand(); die; 
    }
    return 0;
}

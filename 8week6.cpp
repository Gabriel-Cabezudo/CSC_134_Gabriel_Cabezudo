//author: Gabriel Cabezudo
//date: 10/1/2025
//This program asks user how many times they would like to roll a die and then randomly generates a number between 1 and 6 for each roll

//include libary
#include <iostream>

//set standard namespace
using namespace std;

int main () 
{
    //initialize variables
    int userNum;
    int dieRoll;

    //seed random number generator
    srand(time(0));

    //ask user for input
    cout << "How many times would you like to roll the die? ";
    cin >> userNum;

    //create for loop to loop user input times and randomly generate a number between 1 and 6 for each roll
    for (int count = 1; count <= userNum; count++)
    {
        dieRoll = rand() % 6 + 1;
        cout << "You rolled a: " << dieRoll << endl;
    }
    return 0;
}
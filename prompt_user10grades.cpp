//author: Gabriel Cabezudo
//date: 9/21/2025
//This program uses a while loop to prompt the user to enter 10 grades, then calculates and displays the average grade.

//include necessary libraries
#include <iostream>

//use the standard namespace
using namespace std;

int main()
{
    //declare variables
    double grade, sum = 0;
    const int totalgrades = 10; //total number of grades entered
    int count = 0; //counter for number of grades entered
    double average; //average grade

    //prompt the user to enter 10 grades
    while (count < totalgrades)
    {
        cout << "Enter grade " << (count +1) << ": ";
        cin >> grade;
        sum += grade; //add the grade to the sum
        count++; //increment the counter
    }
    //calculate the average
    average = sum / totalgrades; //for accurate division
    //output the average
    cout << "The average grade is: " << average << endl;
    return 0;

}
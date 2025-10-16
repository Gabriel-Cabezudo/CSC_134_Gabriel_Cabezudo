//author: Gabriel Cabezudo
//date: 10/15/2025
//This file reads integers from numbers.txt and calculates their sum

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;     
    int number;      
    int sum = 0;        

    inFile.open("numbers.txt"); //open the file

    //read numbers and add to sum
    while (inFile >> number) {
        sum += number;
    }

    inFile.close(); //close the file

    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
}
//author: Gabriel Cabezudo
//date: 10/15/2025
//This program uses ofstream to create a file and asks the user for an integer n and writes values from 0 to n-1 to the file
#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ofstream outFile; //create of stream object
    outFile.open("lab4.txt"); //open a file
    int n; //declare an integer variable

    cout << "Enter an integer: "; //prompt the user for an integer
    cin >> n; //read the integer

    for(int i = 0; i < n; i++) //for loop to loop over n times
    {
        outFile << i << endl; //write each iteration of the loop to the file
    }
    outFile.close(); //close the file

    cout << "Done Writing...." << endl; //print to the console
    return 0;
}


//author: Gabriel Cabezudo
//date: 10/15/2025
//This program uses ofstream to create  a file and write values in it

#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ofstream outFile; //create ofstream object
    outFile.open("lab2.txt"); //open a file named lab2.txt

    //write values to the file
    outFile << "***************************************\n";
    outFile << "             Shopping Cart             \n";
    outFile << "***************************************\n";
    outFile << "product code      qty      price\n";
    outFile << "  789              7       $12.00\n";
    outFile << "                                       \n";
    outFile << "                          Total: $84.00\n";

    outFile.close(); //close the file
    return 0;
}
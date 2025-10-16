//author: Gabriel Cabezudo
//date: 10/15/2025
//This program uses lab2 without the \n

#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ofstream outFile; //create ofstream object
    outFile.open("lab3.txt"); //open a file named lab2.txt

    //write values to the file
    outFile << "***************************************";
    outFile << "             Shopping Cart             ";
    outFile << "***************************************";
    outFile << "product code      qty      price";
    outFile << "  789              7       $12.00";
    outFile << "                                       ";
    outFile << "                          Total: $84.00";

    outFile.close(); //close the file
    return 0;
}
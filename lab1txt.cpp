//author: Gabriel Cabezudo
//date: 10/15/2025
//This program uses ofstream to create a file and write values to it

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outFile; //create an ofstream object
    outFile.open("lab1.txt"); //open a file named lab1.txt

    //write values to the file
    outFile << "Bourne Identity" << endl;
    outFile << "Star Wars Epidsode IV" << endl;
    outFile << " The Hunger Games" << endl;
    outFile << "Dead Pool" << endl;
    outFile << "X-Men First Class" << endl;
    outFile << "Star Wars Epidsode V" << endl;
    outFile << "Get Out" << endl;

    outFile.close(); //close the file
    return 0;
}
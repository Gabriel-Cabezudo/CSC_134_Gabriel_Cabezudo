//author: Gabriel Cabezudo
//date: 10/15/2025
//This file reads names from friends.txt and prints them to the console

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile;
    string name;

    inFile.open("friends.txt"); //open the file

    //read each line (friend name) and print it
    while (getline(inFile, name)) {
        cout << name << endl;
    }

    inFile.close();
    return 0;
}
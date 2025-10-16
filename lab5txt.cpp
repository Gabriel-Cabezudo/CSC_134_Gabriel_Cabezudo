//author: Gabriel Cabezudo
//date: 10/15/2025
//This program uses ofstream to create a file and asks the user for the names of three friends and writes them to the file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile; //create ofsteam object
    outFile.open("lab5.txt"); //open a file
    string friend1, friend2, friend3; //declare string variables for friends

    //prompt the user for the names of three friends
    cout << "Enter the name of your first friend: ";
    getline(cin, friend1); //read the first friend's name 

    cout << "Enter the name of your second friend: ";
    getline(cin, friend2); //read the second friend's name

    cout << "Enter the name of your third friend: ";
    getline(cin, friend3); //read the third friend's name

    //write each friend's name to the file on separate lines\

    outFile << friend1 << endl;
    outFile << friend2 << endl;
    outFile << friend3 << endl;
    outFile.close(); //close the file

    return 0;
}
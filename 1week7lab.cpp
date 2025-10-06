//author: Gabriel Cabezudo
//date: 10/5/2025
//This prints a multiplication table for numbers 1-10 using nested for loops

//include library
#include <iostream>

//use standard namespace
using namespace std;

int main() {
    //outer loop for rows
    for (int i = 1; i <= 10; i++) {
        //inner loop for columns
        for (int j = 1; j <= 10; j++) {
            //print product with tab spacing
            cout << i * j << "\t";
        }
        //new line after each row
        cout << endl;
    }
    return 0;
}
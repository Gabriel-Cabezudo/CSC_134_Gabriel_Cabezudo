//Gabriel Cabezudo
//11/2/2025


#include <iostream>
#include <limits>
using namespace std;

int main() 
{
    const int SIZE = 5;
    int numbers[SIZE];

    // Prompt user for input
    cout << "Please enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ) 
    {
        cin >> numbers[i];
        if (cin.fail()) {
            cin.clear(); // clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter an integer:" << endl;
        } else {
            i++; // only increment if input is valid
        }
    }

    // Reverse the array
    for (int i = 0; i < SIZE / 2; i++) 
    {
        int temp = numbers[i];
        numbers[i] = numbers[SIZE - 1 - i];
        numbers[SIZE - 1 - i] = temp;
    }

    // Display the integers in reverse order
    cout << "The integers in reverse order are:" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
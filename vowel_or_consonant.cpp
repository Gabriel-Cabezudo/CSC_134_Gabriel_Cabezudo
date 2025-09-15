//author: Gabriel Cabezudo
//date: 09/14/2025
//This program determines if a character is a vowel or consonant

//include iostream library
#include <iostream>
#include <cctype> // for tolower function to account for upper and lower case letters

//use standard namespace
using namespace std;

//main function
int main()
{
    char letter;

    //prompt user for input
    cout << "Enter a letter: ";
    cin >> letter;
    letter = tolower(letter); // convert the letters to lowercase

    //determine if letter is a vowel or consonant
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        cout << letter << " is a vowel." << endl;
    else if ((letter >= 'a' && letter <= 'z') && !(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'))
        cout << letter << " is a consonant." << endl;
    else 
        cout << letter << " is not a valid letter." << endl;

    return 0;

    
}
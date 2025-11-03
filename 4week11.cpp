//Gabriel Cabezudo
//11/2/2025
// This program uses the Luhn algorithm to check the validity of a credit card. Your credit card should be a string value and you should use the following header libraries to assist you in the program: <iostream>, <sstream>, <algorithm> and <string>

#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string creditCard;
    int sum = 0;
    bool alternate = false;

    cout << "Enter your credit card number: ";
    cin >> creditCard;

    // Process the credit card number using the Luhn algorithm
    for (int i = creditCard.length() - 1; i >= 0; i--) // Start from the last digit
    {
        int n = creditCard[i] - '0';
        if (alternate) // Double every second digit
        {
            n *= 2; // Double the digit
            if (n > 9) // If the result is greater than 9, subtract 9
                n -= 9;
        }
        sum += n; // Add to sum
        alternate = !alternate;
    }

    // Check if the sum is a multiple of 10
    if (sum % 10 == 0) // Valid credit card
        cout << "The credit card number is valid." << endl;
    else
        cout << "The credit card number is invalid." << endl;

    return 0; 
}
//Gabriel Cabezudo
//10/5/2025
//This program helps users track their monthly budget by allowing them to input their budgeted amount and expenses, then calculates whether they are over or under budget

#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    double budgetedAmount;
    double expense;
    double totalExpenses = 0.0;
    char moreExpenses;

    // Prompt user for budgeted amount
    cout << "Enter your budgeted amount for the month: $";
    cin >> budgetedAmount;

    // Input validation for budgeted amount
    while (cin.fail() || budgetedAmount < 0) {
        cin.clear(); // clear the fail state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        cout << "Invalid input. Please enter a positive number for the budgeted amount: $";
        cin >> budgetedAmount;
    }

    // Loop to get expenses
    do {
        cout << "Enter an expense: $";
        cin >> expense;

        // Input validation for expense
        while (cin.fail() || expense < 0) {
            cin.clear(); // clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a positive number for the expense: $";
            cin >> expense;
        }

        totalExpenses += expense;

        cout << "Do you have more expenses to enter? (y/n): ";
        cin >> moreExpenses;

    } while (moreExpenses == 'y' || moreExpenses == 'Y');

    // Calculate and display budget status
    double difference = budgetedAmount - totalExpenses;
    if (difference > 0) {
        cout << "You are under budget by $" << difference << endl;
    } else if (difference < 0) {
        cout << "You are over budget by $" << -difference << endl;
    } else {
        cout << "You are exactly on budget." << endl;
    }

    return 0;
}
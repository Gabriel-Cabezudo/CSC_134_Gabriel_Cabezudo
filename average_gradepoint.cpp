//Gabriel Cabezudo
//09/10/2025
//This program calculates grade of a student using the average of 3 integers

#include <iostream>

using namespace std;

int main()
{
    //declare variables
    int num1, num2, num3;
    double average;
    //ask user for input
    cout <<"Enter three integers:";
    cout << "Enter three integers: ";
    cin >> num1 >>num2 >> num3;
    average = (num1 + num2 + num3) / 3.0;
    if (average>=90)
    {
        cout << " A" << endl;
    }
    if (average>=80 && average<90)
    {
        cout << " B " <<endl;
    }
    if (average>=70 && average<80)
    {
        cout << " C " <<endl;
    }
    if (average>=60 && average<70)
    {
        cout << " D " <<endl;
    }
    if (average<60)
    {
        cout << " F " <<endl;
    }
    
    //print out the grade
    cout << "The grade is "<< average << endl;

    return 0;
}
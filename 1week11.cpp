//Gabriel Cabezudo
//10/29/2025


#include <iostream>


using namespace std;

int main()
{
   const int ARRAY_SIZE = 10;
   int grades [ARRAY_SIZE];
   double average;

   cout<< "Enter 10 grades: " << endl;

    for (int count = 0; count < ARRAY_SIZE; count++)
    {   cout << "Grade " << (count + 1) << ": " << endl;
        cin >> grades[count];
    }

    int sum = 0;
    for (int count = 0; count < ARRAY_SIZE; count++)
    {
        sum += grades[count];
    }
    average = static_cast<double>(sum) / ARRAY_SIZE;

    cout << "The gradepoint average is: " << average << endl;
 return 0;

} 
//Gabriel Cabezudo
//10/29/2025


#include <iostream>


using namespace std;

main()
{
   const int ARRAY_SIZE = 10;
   int grades [ARRAY_SIZE];
   int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
   double average;

    for
    (int count = 0; count <= ARRAY_SIZE; count++);
    {   cout << "Enter 10 grades" << endl;
        cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num9 >> num10;
    }
    average = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10) / 10.0;

    cout << "The gradepoint average is: " << average << endl;
 return 0;

}
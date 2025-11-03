//Gabriel Cabezudo
//11/2/2025

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int MAX_SALES = 100;
    int sales[MAX_SALES];
    int count = 0;
    int totalSales = 0;

    ifstream inputFile("sales.txt"); //Open the file
    if (!inputFile)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    //Read sales figures from the file into the array
    while (count < MAX_SALES && inputFile >> sales[count])
    {
        totalSales += sales[count];
        count++;
    }

    inputFile.close(); //Close the file

    //Print the total sales to the console
    for (int i = 0; i < count; i++)
    {
        cout << "Sales figure " << (i + 1) << ": " << sales[i] << endl;
    }
    cout << "Total sales: " << totalSales << endl;

    return 0;
}
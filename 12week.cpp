//Gabriel Cabezudo
//11/9/2025
//This program creates a graph of the linear equation y = mx + b for x values from 0 to 4

#include <iostream>
using namespace std;

int main()
{
    const int width = 20; // x-axis length
    const int height = 16; // y-axis height (0–15)
    const int m = 2; // slope
    const int b = 3; // intercept

    // Create array for the graph
    char graph[height][width];

    // Initialize the array
    for (auto &row : graph)
        for (auto &col : row)
            col = ' ';

    // Calculate y = mx + b for x = 0–4 and plot 'X'
    int x_values[] = {0, 1, 2, 3, 4};
    for (int x : x_values) // range-based for loop
    {
        int y = m * x + b;
        if (y >= 0 && y < height)
            graph[height - y - 1][x + 1] = 'X'; // +1 so we have room for y-axis
    }

    // Print the graph with y-axis labels
    for (int y = height - 1; y >= 0; --y)
    {
        cout << (y < 10 ? " " : "") << y << "|";
        for (char c : graph[height - y - 1]) // range-based for loop
            cout << c;
        cout << endl;
    }

    // Print the x-axis labels
    cout << "  0";
    for (int x = 1; x < width; ++x)
        cout << "|" << x;
    cout << endl;

    return 0;
}
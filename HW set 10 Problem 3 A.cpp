// PLAN - Module 10 feature: input validation
// Feature: Keep asking for x and y until each one is from 0 to 9,
//          so a point outside the plot is never written to the array.
// Pieces:
//   1. A while loop that re-asks for x while x < 0 or x >= COLS
//   2. The same loop for y, using ROWS
//   3. Handle input that is not a number (like "abc") so it doesn't loop forever
// Rules: plain arrays only, no vector, no cmath, use ROWS/COLS constants (no typed 9s)
// Tests (worked out by hand):
//   x=3, y=2        -> * at row 2, column 3 (same as Part A)
//   x=0, y=0        -> * in the top-left corner
//   x=9, y=9        -> * in the bottom-right corner (last row, last column)
//   x=10, then 4    -> rejects 10, asks again, accepts 4
//   x=-1, then 4    -> rejects -1, asks again, accepts 4
//   y=12, then 5    -> rejects 12, asks again, accepts 5
//   x=abc, then 2   -> TEST TO BREAK IT: should reject and ask again, not crash or loop

#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

int main()
{
    char plot[ROWS][COLS];

    // Fill every cell with '.'
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            plot[r][c] = '.';
        }
    }

    // Display the empty plot
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            cout << plot[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Get the point from the user
    int x, y;
    cout << "Enter an x coordinate (0-" << COLS - 1 << "): ";
    cin >> x;
    while (x < 0 || x >= COLS)
    {
        cout << "x must be from 0 to " << COLS - 1 << ". Try again: ";
        cin >> x;
    }
    
    cout << "Enter a y coordinate (0-9): ";
    cin >> y;
    cout << endl;

    // x is the column and y is the row, so the row index goes first
    plot[y][x] = '*';

    // Display the plot again with the point marked
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            cout << plot[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}

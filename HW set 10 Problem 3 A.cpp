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
    cout << "Enter an x coordinate (0-9): ";
    cin >> x;
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
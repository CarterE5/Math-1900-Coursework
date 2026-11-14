#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main()
{
    int table[ROWS][COLS] = {
        {1, 2, 3, 4},
        {2, 4, 6, 8},
        {3, 6, 9, 12}
    };

    // Print the table with numbers lined up in columns
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            cout << setw(4) << table[r][c];
        }
        cout << endl;
    }
    cout << endl;

    // Row totals: outer loop goes down the rows, inner loop adds across the columns
    for (int r = 0; r < ROWS; r++)
    {
        int rowTotal = 0;
        for (int c = 0; c < COLS; c++)
        {
            rowTotal += table[r][c];
        }
        cout << "Row " << r + 1 << " total: " << rowTotal << endl;
    }
    cout << endl;

    // Column totals: outer loop goes across the columns, inner loop adds down the rows
    for (int c = 0; c < COLS; c++)
    {
        int colTotal = 0;
        for (int r = 0; r < ROWS; r++)
        {
            colTotal += table[r][c];
        }
        cout << "Column " << c + 1 << " total: " << colTotal << endl;
    }

    return 0;
}
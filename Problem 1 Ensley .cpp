// Problem 1. Display an Array Three Ways Carter Ensley
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;                      // constant used for the array size and every loop
    int numbers[SIZE] = { 0, 10, 2, 4, 10 };   // plain array holding the 5 values

    // Loop 1: all values on one line, separated by spaces
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Loop 2: each value on its own line
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << endl;
    }

    // Loop 3: values in reverse order, all on one line
    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
// Problem 2. Read and Display Three Doubles Carter Ensley
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3;      // constant used for the array size and every loop
    double values[SIZE];     // plain array to hold 3 doubles

    // Loop 1: read each value from the user into the array
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
    }

    // Loop 2: print each value on its own line
    cout << "You entered:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << values[i] << endl;
    }

    return 0;
}
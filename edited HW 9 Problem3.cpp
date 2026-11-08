// Problem 3. Order Total with Parallel Arrays Carter Ensley
#include <iostream>
using namespace std;

// Returns the total cost of the order: the sum of price times quantity for every item.
// This function does no printing and reads no input; main handles all output.
double orderTotal(const double prices[], const int quantities[], int size)
{
    double total = 0.0;                          // running sum, starts at zero
    for (int i = 0; i < size; i++)
    {
        total += prices[i] * quantities[i];      // add this item's line cost
    }
    return total;                                // send the total back to main
}

int main()
{
    const int SIZE = 3;                          // constant used for both arrays and every loop
    double prices[SIZE] = { 2.50, 4.00, 1.25 };    // price of each item
    int quantities[SIZE] = { 4, 2, 8 };            // quantity ordered of each item

    // Print one line per item: quantity, price, and line cost
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Item " << i + 1 << ": "
            << quantities[i] << " x " << prices[i]
            << " = " << quantities[i] * prices[i] << endl;
    }

    // Call the function and print the order total
    cout << "Order total: " << orderTotal(prices, quantities, SIZE) << endl;

    return 0;
}

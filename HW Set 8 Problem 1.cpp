// Problem 1. Product Function in a Loop
#include <iostream>
using namespace std;

// Prototype: returns the product of two doubles
double product(double a, double b);

int main()
{
    double num1, num2;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "The product is " << product(num1, num2) << endl;
    }

    return 0;
}

// Definition: multiplies a by b and returns the result (no cout/cin here)
double product(double a, double b)
{
    return a * b;
}

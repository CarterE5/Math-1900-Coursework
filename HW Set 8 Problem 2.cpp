// Carter Ensley - Module 8, Problem 2: Cylinder Volume
#include <iostream>
using namespace std;

const double PI = 3.14159;

// Prototype: returns the volume of a cylinder (pi * r * r * h)
double cylinderVolume(double radius, double height);

int main()
{
    double radius, height;

    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Enter the height: ";
    cin >> height;

    cout << "The volume is " << cylinderVolume(radius, height) << endl;

    return 0;
}

// Definition: squares the radius by multiplying it by itself, then returns the volume
double cylinderVolume(double radius, double height)
{
    return PI * radius * radius * height;
}

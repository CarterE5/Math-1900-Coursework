// Name: Carter Ensley
// Assignment: Project 1 Average Rate Of Change
//
// This program models a vehciles trip by collecting position (miles) and
// time (hours) at several checkpoints. It then calculates the average rate
// of change (average speed) between each pair of checkpoints
// and for the whole trip.
//
// Average rate of change = (change in position) / (change in time)

#include <iostream>
#include <iomanip>
#include <vector>
#include <limits>

using namespace std;

int main () 
{
	//
	// Section 1: Ask how many checkpoints to record (must be at least 2)
	//
	int numCheckpoints = 0;

	cout << "How many checkpoints would you like to record?  ";
	while (!(cin >> numCheckpoints) || numCheckpoints < 2)
	{
		// Clear the bad input (e.g., letters) so the loop can try again
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: you must enter a number that is at least 2. \n";
		cout << "How many checkpoints would you like to record?  ";
	}

  return 0;
}

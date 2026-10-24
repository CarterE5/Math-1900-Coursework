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

	// Section 2: Collect position and time for each checkpoint
	vector<double> positions(numCheckpoints);
	vector<double> times(numCheckpoints);

	for (int i = 0; i < numCheckpoints; i++)
	{
		bool valid = false;

		// Keep re-prompting this checkpoint until the input is valid
		while (!valid)
		{
			cout << " Enter position (miles) and time (hours) for checkpoint " << (i + 1) << ": ";

			double pos, t;

			// Make sure the user typed 2  numbers
			if (!(cin >> pos >> t))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Error: you must enter 2 numbers (position and time). \n";
				continue;
			}

			// Section 3: Validate that time is greater than the previous time
			if (i > 0 && t <= times[i - 1])
			{
				cout << "Error: the time for checkpoint " << (i + 1) << " must be greater than the previous time.(" << times[i - 1] << "hours). Please try again.\n";
				continue;
			}

			// Input is good, so store it
			positions[i] = pos;
			times[i] = t;
			valid = true;
		}
	}

	// Show all speeds with one decimal place
	cout << fixed << setprecision(1);
	cout << endl;

	// Section 4: Average speed between each pair of consecutive checkpoints
	for (int i = 1; i < numCheckpoints ; i++)
	{
		double changeInPosition = positions[i] - positions[i - 1];
		double changeInTime = times[i] - times[i - 1];
		double averageSpeed = changeInPosition / changeInTime;

		cout << "Average speed between checkpoint " << i << " and checkpoint " << (i + 1) << ": " << averageSpeed << " mph" << endl;
	}

	// Section 5: Average speed for the whole trip
	double totalDistance = positions[numCheckpoints - 1] - positions[0];
	double totalTime = times[numCheckpoints - 1] - times[0];
	double overallSpeed = totalDistance / totalTime;

	cout << "Average speed for the whole trip: " << overallSpeed << " mph" << endl;

	return 0;
}

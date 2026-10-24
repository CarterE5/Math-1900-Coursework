// Carter Ensley
// Problem:1 Multipcation practice program

#include <iostream>
using namespace std;

int main()
{
	int a;       //first number entered by the user
	int b;       //second number entered by the user
	int answer;  // the users answer to a*b
	int correctCount = 0; // how many correct answers 
	int i;       // loop counter

	for (i=0; i < 5; i++)
	{
cout << "Enter two numbers:";
cin >> a >> b;

cout << "What is " << a << " * " << b << "?" << endl;
cin >> answer;

if (answer == a * b)
{
	cout << "Correct!" << endl;
	correctCount++;
}
else
{
	cout << "Sorry : (Try again" << endl;
}
}

cout << " You answered correctly " << correctCount << " out of 5 times." << endl;

return 0;
}

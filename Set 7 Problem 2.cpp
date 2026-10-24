// Carter Ensley
// Problem 2: Multiplication practice with random questions and a log of missed questions

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a;                 // first random number
    int b;                 // second random number
    int answer;            // the user's answer to a*b
    int correctCount = 0;  // how many answers were correct
    int i;                 // loop counter
    ofstream outFile;      // file for missed questions

    srand((unsigned)time(0));   // seed so questions are different each run

    outFile.open("practice.txt");

    for (i = 0; i < 5; i++)
    {
        a = rand() % 12 + 1;   // random number from 1 to 12
        b = rand() % 12 + 1;   // random number from 1 to 12

        cout << "What is " << a << "*" << b << "?" << endl;
        cin >> answer;

        if (answer == a * b)
        {
            cout << "Correct!" << endl;
            correctCount++;
        }
        else
        {
            cout << "Sorry :( Try again" << endl;
            outFile << a << "*" << b << " = ?" << endl;
        }
    }

    outFile.close();

    cout << "You answered correctly " << correctCount << " out of 5 times." << endl;

    return 0;
}
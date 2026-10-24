// Carter Ensley
// Problem 3: Multiplication practice with multiple rounds and a log of missed questions

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
    int correctCount;      // how many answers were correct this round
    int i;                 // loop counter
    char again = 'y';      // user's choice to play another round
    ofstream outFile;      // file for missed questions

    srand((unsigned)time(0));   // seed so questions are different each run

    outFile.open("practice.txt");

    while (again == 'y' || again == 'Y')
    {
        correctCount = 0;  // reset score at the start of every round

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

        cout << "You answered correctly " << correctCount << " out of 5 times." << endl;

        cout << "Try again? Y or y for yes. N or n for no" << endl;
        cin >> again;
    }

    outFile.close();

    cout << "Thanks for practicing!" << endl;

    return 0;
}

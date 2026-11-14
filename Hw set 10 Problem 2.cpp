#include <iostream>
using namespace std;

const int STUDENTS = 2;
const int QUIZZES = 3;

// Prototype
double rowAverage(double scores[][QUIZZES], int row);

int main()
{
    double scores[STUDENTS][QUIZZES];

    // Read the scores: outer loop is students (rows), inner loop is quizzes (columns)
    for (int r = 0; r < STUDENTS; r++)
    {
        for (int c = 0; c < QUIZZES; c++)
        {
            cout << "Enter score for student " << r + 1 << ", quiz " << c + 1 << ": ";
            cin >> scores[r][c];
        }
    }
    cout << endl;

    // Average for each student (each row), using the function
    for (int r = 0; r < STUDENTS; r++)
    {
        cout << "Student " << r + 1 << " average: " << rowAverage(scores, r) << endl;
    }

    // Average for each quiz (each column): outer loop is quizzes, inner loop adds down the students
    for (int c = 0; c < QUIZZES; c++)
    {
        double colTotal = 0;
        for (int r = 0; r < STUDENTS; r++)
        {
            colTotal += scores[r][c];
        }
        cout << "Quiz " << c + 1 << " average: " << colTotal / STUDENTS << endl;
    }

    return 0;
}

// Returns the average of one row (one student's quiz scores)
double rowAverage(double scores[][QUIZZES], int row)
{
    double total = 0;
    for (int c = 0; c < QUIZZES; c++)
    {
        total += scores[row][c];
    }
    return total / QUIZZES;
}
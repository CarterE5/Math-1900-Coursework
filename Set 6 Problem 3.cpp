#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string password, guess;
    int attempts = 0;
    bool guessedCorrectly = false;

    ofstream outFile("attempts.txt");

    cout << "Enter a 5 character password: ";
    cin >> password;

    while (!guessedCorrectly && attempts < 3) {
        attempts++;
        cout << "Attempt " << attempts << ", enter password: ";
        cin >> guess;

        if (guess == password) {
            guessedCorrectly = true;
        }
        else {
            cout << "Incorrect." << endl;
            outFile << guess << endl;
        }
    }

    if (guessedCorrectly) {
        cout << "Correct! Password guessed." << endl;
    }
    else {
        cout << "Out of attempts. All 3 attempts have been used up." << endl;
    }

    outFile.close();

    return 0;
}
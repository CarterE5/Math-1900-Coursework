// Carter Ensley - Module 8, Problem 3: Passphrase Checker
#include <iostream>
#include <string>
using namespace std;

// Prototype: returns "correct" if the attempt matches the secret, otherwise "incorrect"
string checkPassphrase(string attempt);

int main()
{
    string attempt;

    cout << "Enter the passphrase: ";
    getline(cin, attempt);

    cout << checkPassphrase(attempt) << endl;

    return 0;
}

// Definition: the secret phrase is stored here, inside the function
string checkPassphrase(string attempt)
{
    const string SECRET = "blue rockets fly";

    if (attempt == SECRET)
    {
        return "correct";
    }
    else
    {
        return "incorrect";
    }
}

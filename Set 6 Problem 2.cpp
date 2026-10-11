#include <iostream>
using namespace std;

int main() {
	int secret, guess;
	int guesses = 0;

	cout << "Enter a secret number (1-10): ";
	cin >> secret;

	cout << "Guess the number: ";
	cin >> guess;
	guesses++;

	while (guess != secret) {
		cout << "Guess the number: ";
		cin >> guess;
		guesses++;
	}

	cout << "You got it in" << guesses << " guesses!" << endl;

		return 0;
}
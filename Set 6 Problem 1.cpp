#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;
	cout << "Enter a 5 character password: ";
	cin >> password;

	int count = 1;
	while (count <= 5) {
		cout << "Character " << count << ": " << password[count - 1] << endl;
		count++;
	}

	return 0;
}



						
		


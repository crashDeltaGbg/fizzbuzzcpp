#include <iostream>

using namespace std;

int main () {
	int user_input_number = 0;

	cout << "Please enter a whole number." << endl;

	cin >> user_input_number;

	if (user_input_number % 15 == 0) {
		cout << "FizzBuzz" << endl;
	} else if (user_input_number % 5 == 0) {
		cout << "Fizz" << endl;
	} else if (user_input_number % 3 == 0) {
		cout << "Buzz" << endl;
	} else {
		cout << "Sorry, that number doesn't do anything :/" << endl;
	}

	return 0;
}

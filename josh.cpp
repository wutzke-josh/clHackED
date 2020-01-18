#include <iostream>

using namespace std;

void josh() {
	int number;

	cout << "Enter an integer: ";
	cin >> number;

	if(cin.fail()) {
		cout << "That's not an integer" << endl;
		cin.clear();
		return;
	}

	cout << "what a spicy integer!!!!!" << endl;
	return;
}
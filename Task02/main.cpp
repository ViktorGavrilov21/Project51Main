#include "logic.h"

int main() {
	int num;

	cout << "Input your number: ";
	cin >> num;

	print("Sum of numbers is " + to_string(get_sum_numbers(num)));


	return 0;
}
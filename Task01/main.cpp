#include "logic.h"

int main() {
	long long int num;

	do {
		cout << "Input your number: ";
		cin >> num;
	} while (num < 0);

	print(is_perfect_num(num) == false ? "No, your number isn`t perfect\n"
		: "Yes, your number are perfect\n");


	return 0;
}
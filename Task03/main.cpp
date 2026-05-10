#include "logic.h"

int main() {
	int size;
	int array[DEFAULT_SIZE];

	do {
		cout << "Input size: ";
		cin >> size;
	} while (size <= 0);

	cout << "Input elements: ";
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	print("Missing number is " + to_string(get_missing_num(array, size)));


	return 0;
}
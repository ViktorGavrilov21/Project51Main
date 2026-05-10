#include "logic.h"

int get_missing_num(int array[], int size) {
	int default_sum = (1 + size + 1) * (size + 1) / 2;

	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += array[i];
	}

	return default_sum - sum;
}
#include "logic.h"

bool is_perfect_num(int num) {
	long long array[7]{ 6, 28, 496, 8128, 33550336, 8589869056,
		137438691328 };

	for (int i = 0; i < 7; i++) {
		if (num == array[i]) {
			return true;
		}
	}

	return false;
}


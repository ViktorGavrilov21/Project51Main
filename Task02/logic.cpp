#include "logic.h"

int get_sum_numbers(int num) {
	int sum_3 = 0;
	int sum_5 = 0;
	int sum_15 = 0;

	for (int i = 3; i < num; i += 3) {
		sum_3 += i;
	}

	for (int i = 5; i < num; i += 5) {
		sum_5 += i;
	}

	for (int i = 15; i < num; i += 15) {
		sum_15 += i;
	}


	return sum_3 + sum_5 - sum_15;


	//int sum = 0;

	//for (int i = 0; i < num; i++) {
	//	if (i % 3 == 0 || i % 5 == 0) {
	//		sum += i;
	//	}
	//}

	//return sum;
}
#include <stdio.h>

#define SIZE 4

int ex5() {
	//Expected output: -441
	int arr[SIZE] = { 3, 2, -5, 7 };

	int firstNegativeIndex = -1;

	int result = 0;
	int* additive = arr;
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < 0 && firstNegativeIndex < 0) {
			firstNegativeIndex = i;
		}
		
		if (i != SIZE - 1) {
			result += *additive;
			*additive *= arr[i + 1];
		} else {
			result += *additive * firstNegativeIndex;
		}
	}

	if (firstNegativeIndex < 0) {
		result = 0;
	}

	printf("%d\n", result);

	return 0;
}
#include <stdio.h>
#include <stdbool.h>

#define SIZE 11

int ex4() {
	//Expected output: 30
	int arr[SIZE] = { 3, 5, 1, 7, 9, 1, 2, 1, 9, 3, 3 };

	for (int i = 0; i < SIZE; i++) {
		bool equalFound = false;

		for (int j = 0; j < SIZE; j++) {
			int* i1 = &arr[i];
			int* i2 = &arr[j];
			if (*i1 == *i2 && i1 != i2) {
				equalFound = true;
				break;
			}
		}
		if (!equalFound) {
			arr[i] = 0;
		}
	}

	int duplicateNumberSum = 0;
	for (int i = 0; i < SIZE; i++) {
		duplicateNumberSum += arr[i];
	}

	printf("%d\n", duplicateNumberSum);

	return 0;
}
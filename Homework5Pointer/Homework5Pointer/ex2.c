#include <stdio.h>

#define SIZE 9

int ex2() {
	// Expected output: 3, 8, 9, 16, 25, 26, 28, 29, 38
	int arr[SIZE] = { 3, 5, 1, 7, 9, 1, 2, 1, 9 };

	int result[SIZE] = { 0 };
	int* p = arr;

	for (int i = 0; i < SIZE; i++) {
		result[i] += *p;
		*p += *(p + i + 1);
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", result[i]);
	}

	printf("\n");
	return 0;
}
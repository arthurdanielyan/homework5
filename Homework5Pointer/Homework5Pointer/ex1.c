#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 9

int ex1() {

	int arr[SIZE] = {3, 5, 1, 7, 9, 1, 2, 1, 9};

	int result[SIZE - 2];
	int* max = arr;
	int* min = arr;
	int lastMinIndex = 0;

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > *max) max = &arr[i];
		if (arr[i] <= *min) {
			min = &arr[i];
			lastMinIndex = i;
		}
	}

	bool isMaxRemoved = false;
	int* pointerResult = result;
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] == *max) {
			if (isMaxRemoved) {
				*pointerResult = *max;
				pointerResult++;
			}
			isMaxRemoved = true;
		} else if (i != lastMinIndex) {
			*pointerResult = arr[i];
			pointerResult++;
		}
	}

	for (int i = 0; i < SIZE - 2; i++) {
		printf("%d ", result[i]);
	}
	printf("\n");
	

	return 0;
}
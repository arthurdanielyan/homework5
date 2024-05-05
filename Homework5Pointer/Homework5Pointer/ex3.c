#include <stdio.h>
#include <stdbool.h>

int ex3() {

	int arr[9] = { 3, 5, 1, 7, 9, 1, 2, 1, 9 };
	int n = 9;


	int uniqueNumberCount = 0;
	for (int i = 0; i < n; i++) {
		bool equalFound = false;

		for (int j = 0; j < n; j++) {
			int* i1 = &arr[i];
			int* i2 = &arr[j];
			if (*i1 == *i2 && i1 != i2) {
				equalFound = true;
				break;
			}
		}
		if(!equalFound) {
			printf("%d ", arr[i]);
			uniqueNumberCount++;
		}
	}

	printf("\n%d\n", uniqueNumberCount);
}
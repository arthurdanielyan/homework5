#include <stdio.h>

void fix_sorting(int* x, int n) {
    int* ptr_x = x;
    
    while (*(ptr_x + 1) >= *ptr_x && ptr_x < x + n - 1) {
        ptr_x++;
    }

    int temp = *ptr_x;
    *ptr_x = *(ptr_x + 1);
    *(ptr_x + 1) = temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (x[j] < x[j + 1]) {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}

int ex10() {
    int n = 6;
    int x[] = { 5, 4, 3, 7, 2, 1 };

    fix_sorting(x, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}

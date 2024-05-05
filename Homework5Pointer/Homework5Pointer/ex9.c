#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

bool contains_all_numbers(int* x) {
    bool found[SIZE];
    for (int i = 0; i < SIZE; i++) {
        found[i] = false;
    }

    int* ptr_x = x;

    for (int i = 0; i < SIZE; i++, ptr_x++) {
        if (*ptr_x >= 1 && *ptr_x <= SIZE) {
            found[*ptr_x - 1] = true;
        }
    }

    bool* ptr_found = found;
    for (int i = 0; i < SIZE; i++, ptr_found++) {
        if (!(*ptr_found)) {
            return false;
        }
    }

    return true;
}

int ex9() {
    int x[] = { 1, 2, 3, 4, 0 };

    int result = contains_all_numbers(x) ? 1 : 0;

    printf("%d\n", result);

    return 0;
}

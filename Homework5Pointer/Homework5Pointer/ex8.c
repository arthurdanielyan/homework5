#include <stdio.h>
#include <stdbool.h>

bool check_consecutive_zeros(int* x, int n) {
    for (int i = 0; i <= n - 5; i++) {
        bool consecutive = true;
        for (int j = i; j < i + 5; j++) {
            if (x[j] != 0) {
                consecutive = false;
                break;
            }
        }
        if (consecutive) {
            return true;
        }
    }
    return false;
}

int ex8() {
    int n = 10;
    int x[] = { 1, 0, 0, 2, 0, 0, 2, 3, 4, 0 };

    bool T = check_consecutive_zeros(x, n);

    printf("T is %s\n", T ? "true" : "false");

    return 0;
}

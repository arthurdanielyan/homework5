#include <stdio.h>
#include <math.h>

int ex6() {
    double X = 10;
    double Y[] = { 2, 3, 4, 5, 6, 7 };

    int n = sizeof(Y) / sizeof(Y[0]); 

    int k;

    // Define pointers to iterate through Y array
    double* ptr_Y = Y;
    double* ptr_prev_Y = NULL;

    for (int i = 0; i < n; i++) {
        double Y_k = pow(*ptr_Y, i + 1);
        double Y_k_minus_1 = (ptr_prev_Y == NULL) ? 0 : pow(*ptr_prev_Y, i);

        if (X > Y_k_minus_1 && X <= Y_k) {
            k = i + 1;
            break;
        }

        ptr_prev_Y = ptr_Y;
        ptr_Y++;
    }

    if (k > 0) {
        printf("%d\n", k);
    }
    else {
        printf("NO\n");
    }

    return 0;

	return 0;
}

//int/* intLog(int base, int argument) {
//	int
//}*/
#include <stdio.h>
#include <math.h>

#define MAX_POINTS 10

struct Point {
    double x;
    double y;
};

double distance(struct Point* p1, struct Point* p2) {
    return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));
}

int ex7() {
    int n = 5;
    struct Point points[MAX_POINTS] = {
        {1, 1}, {2, 3}, {5, 7}, {8, 2}, {10, 6}
    };

    int max_index1 = 0;
    int max_index2 = 1;
    double max_distance = distance(&points[max_index1], &points[max_index2]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double d = distance(&points[i], &points[j]);
            if (d > max_distance) {
                max_index1 = i;
                max_index2 = j;
                max_distance = d;
            }
        }
    }

    printf("The ordinal numbers of the points with the largest distance are: %d and %d\n", max_index1 + 1, max_index2 + 1);

    return 0;
}

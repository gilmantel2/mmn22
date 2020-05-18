#include <stdio.h>
#include "complex.h"

#define N 11
typedef  int adjmat [N][N];
int path (adjmat x, int u, int v);
int check(int [N][N], int u, int v, int expected);

main() {
    int failedTests = 0;

    int x[N][N] = {0};

    x[0][4] = 1;
    x[0][5] = 1;
    x[0][7] = 1;
    x[0][9] = 1;
    x[0][10] = 1;
    x[2][1] = 1;
    x[6][0] = 1;
    x[6][2] = 1;
    x[6][8] = 1;
    x[8][3] = 1;

    failedTests += check (x, 6, 0, 1);
    failedTests += check (x, 6, 2, 1);
    failedTests += check (x, 6, 1, 1);
    failedTests += check (x, 12, 0, 0);
    failedTests += check (x, -1, 0, 0);
    failedTests += check (x, 9, 6, 0);
    failedTests += check (x, 8, 3, 1);
    failedTests += check (x, 8, 0, 0);
    failedTests += check (x, 4, 9, 0);
    failedTests += check (x, 8, 8, 1);

    if(failedTests == 0)
        printf("ALL TESTS PASSED!\n");
    else
        printf("FAILED %d TESTS!\n", failedTests);
}


int check(int x[N][N], int u, int v, int expected)
{
    int value = path(x, u, v);
    if(value != expected) {
        printf("--- TEST FAILED WITH: %d,%d returned %d\n", u, v, value);
        return 1;
    }

    printf("The value for %d, %d is %d\n", u, v, expected);
    return 0;
}

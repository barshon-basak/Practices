#include <stdio.h>

#define ROWS 4
#define COLS 4
#define POOL_SIZE 2

void maxPool(int input[][COLS], int output[][COLS/POOL_SIZE]) {
    int i, j, m, n, max;

    for (i = 0; i < ROWS; i += POOL_SIZE) {
        for (j = 0; j < COLS; j += POOL_SIZE) {
            max = input[i][j];

            for (m = i; m < i + POOL_SIZE; m++) {
                for (n = j; n < j + POOL_SIZE; n++) {
                    if (input[m][n] > max) {
                        max = input[m][n];
                    }
                }
            }

            output[i/POOL_SIZE][j/POOL_SIZE] = max;
        }
    }
}

int main() {
    int input[ROWS][COLS] = {
        {2, 6, 3, 1},
        {5, 8, 9, 7},
        {4, 2, 1, 5},
        {9, 3, 2, 6}
    };

    int output[ROWS/POOL_SIZE][COLS/POOL_SIZE];

    printf("Input Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", input[i][j]);
        }
        printf("\n");
    }

    maxPool(input, output);

    printf("\nOutput Matrix after Max Pooling:\n");
    for (int i = 0; i < ROWS/POOL_SIZE; i++) {
        for (int j = 0; j < COLS/POOL_SIZE; j++) {
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }

    return 0;
}

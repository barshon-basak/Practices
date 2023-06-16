#include <stdio.h>

#define ROWS 3
#define COLS 3

void rowSum(int mat[ROWS][COLS]) {
    printf("Row Sum:\n");
    for (int i = 0; i < ROWS; i++) {
        int sum = 0;
        for (int j = 0; j < COLS; j++) {
            sum += mat[i][j];
        }
        printf("Row %d: %d\n", i + 1, sum);
    }
}

void colSum(int mat[ROWS][COLS]) {
    printf("Column Sum:\n");
    for (int j = 0; j < COLS; j++) {
        int sum = 0;
        for (int i = 0; i < ROWS; i++) {
            sum += mat[i][j];
        }
        printf("Column %d: %d\n", j + 1, sum);
    }
}

int main() {
    int mat[ROWS][COLS];
     for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++){
            scanf("%d",&mat[i][j]);
        }
     }
    rowSum(mat);
    colSum(mat);

    return 0;
}

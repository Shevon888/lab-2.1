#include <stdio.h>

int main(void) {
    const int ROWS = 4;
    const int COLS = 5;

    double matrix[4][5] = {
        {1.2,  2.5, -1.0,  4.0,  3.3},
        {5.0,  0.5,  2.5,  1.0, -2.0},
        {3.1,  3.2,  3.3,  3.4,  3.5},
        {-4.0, 2.0,  6.0,  1.5,  0.5}
    };

    double row_sums[4];

    for (int i = 0; i < ROWS; i++) {
        double sum = 0.0;
        for (int j = 0; j < COLS; j++) {
            sum += matrix[i][j];
        }
        row_sums[i] = sum;
    }

    printf("Суми елементів по рядках: ");
    for (int i = 0; i < ROWS; i++) {
        printf("%.2f ", row_sums[i]);
    }
    printf("\n");

    return 0;
}

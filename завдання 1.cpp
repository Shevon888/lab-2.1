#include <stdio.h>

int main(void) {
    const int N = 6;
    double arr[6];

    /* 1–2. Опис та ініціювання за формулами варіанта */
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            arr[i] = 15.5 - i;
        } else {
            arr[i] = 7.2 + i;
        }
    }

    printf("Початковий масив: ");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    /* 3. Сортування бульбашкою за спаданням */
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Відсортований за спаданням: ");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}

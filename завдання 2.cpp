#include <stdio.h>

int main(void) {
    const int N = 10;
    char arr1[10], arr2[10], arr3[10];
    int k = 0;

    for (int i = 0; i < N; i++) {
        arr1[i] = (char)(5 * i + 30);
        arr2[i] = (char)(60 - 5 * i);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr1[i] == arr2[j]) {
                int exists = 0;
                for (int m = 0; m < k; m++) {
                    if (arr3[m] == arr1[i]) {
                        exists = 1;
                        break;
                    }
                }
                if (!exists) {
                    arr3[k++] = arr1[i];
                }
            }
        }
    }

    long long product = 1;
    int found = 0;

    printf("Коди елементів 3-го масиву: ");
    for (int i = 0; i < k; i++) {
        int code = (unsigned char)arr3[i];
        printf("%d ", code);
        if (code < 40) {
            product *= code;
            found = 1;
        }
    }
    printf("\n");

    if (found) {
        printf("Добуток кодів менше 40: %lld\n", product);
    } else {
        printf("Елементів з кодом менше 40 не знайдено.\n");
    }

    return 0;
}

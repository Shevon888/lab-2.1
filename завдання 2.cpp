#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    char arr1[N], arr2[N], arr3[N];
    int k = 0; // лічильник елементів третього масиву

    // Ініціалізація перших двох масивів
    for (int i = 0; i < N; i++) {
        arr1[i] = static_cast<char>(5 * i + 30);
        arr2[i] = static_cast<char>(60 - 5 * i);
    }

    // Пошук спільних значень для третього масиву
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr1[i] == arr2[j]) {
                // Перевірка, щоб не дублювати вже знайдені символи
                bool exists = false;
                for (int m = 0; m < k; m++) {
                    if (arr3[m] == arr1[i]) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    arr3[k++] = arr1[i];
                }
            }
        }
    }

    // Обчислення добутку кодів < 40
    long long product = 1;
    bool found = false;

    cout << "Коди елементів 3-го масиву: ";
    for (int i = 0; i < k; i++) {
        int code = static_cast<unsigned char>(arr3[i]);
        cout << code << " ";
        if (code < 40) {
            product *= code;
            found = true;
        }
    }
    cout << endl;

    if (found) {
        cout << "Добуток кодів менше 40: " << product << endl;
    } else {
        cout << "Елементів з кодом менше 40 не знайдено." << endl;
    }

    return 0;
}

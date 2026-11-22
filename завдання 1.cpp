#include <iostream>
using namespace std;

int main() {
    const int N = 6;
    float arr[N];

    // Ініціалізація за формулами варіанта
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            arr[i] = 15.5f - i;
        } else {
            arr[i] = 7.2f + i;
        }
    }

    cout << "Початковий масив: ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;

    // Сортування бульбашкою за спаданням
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Відсортований за спаданням: ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

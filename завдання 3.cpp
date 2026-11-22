#include <iostream>
using namespace std;

int main() {
    const int ROWS = 4;
    const int COLS = 5;

    float matrix[ROWS][COLS] = {
        {1.2f, 2.5f, -1.0f, 4.0f, 3.3f},
        {5.0f, 0.5f, 2.5f, 1.0f, -2.0f},
        {3.1f, 3.2f, 3.3f, 3.4f, 3.5f},
        {-4.0f, 2.0f, 6.0f, 1.5f, 0.5f}
    };

    float rowSums[ROWS];

    for (int i = 0; i < ROWS; i++) {
        float sum = 0.0f;
        for (int j = 0; j < COLS; j++) {
            sum += matrix[i][j];
        }
        rowSums[i] = sum;
    }

    cout << "Суми елементів по рядках: ";
    for (int i = 0; i < ROWS; i++) {
        cout << rowSums[i] << " ";
    }
    cout << endl;

    return 0;
}

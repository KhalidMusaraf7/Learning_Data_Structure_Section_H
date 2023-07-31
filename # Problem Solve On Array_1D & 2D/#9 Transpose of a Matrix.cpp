#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int rows, int cols) {
    int transposed[3][3];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = arr[i][j];
        }
    }

    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[][3] = {{1, 5, 2}, {8, 3, 7}, {6, 4, 9}};
    int rows = 3;
    int cols = 3;

    transposeMatrix(arr, rows, cols);

    return 0;
}


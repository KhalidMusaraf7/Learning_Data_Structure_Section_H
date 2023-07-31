#include <iostream>
using namespace std;

int findMaxElement(int arr[][3], int rows, int cols) {
    int maxElement = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    return maxElement;
}

int main() {
    int arr[][3] = {{1, 5, 2}, {8, 3, 7}, {6, 4, 11}};
    int rows = 3;
    int cols = 3;

    int maxElement = findMaxElement(arr, rows, cols);
    cout << "Maximum Element: " << maxElement << endl;

    return 0;
}


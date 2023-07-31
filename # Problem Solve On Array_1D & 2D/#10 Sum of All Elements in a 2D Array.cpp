#include <iostream>
using namespace std;

int calculateSum(int arr[][3], int rows, int cols) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}

int main() {
    int arr[][3] = {{1, 5, 2}, {8, 3, 7}, {6, 4, 9}};
    int rows = 3;
    int cols = 3;

    int sum = calculateSum(arr, rows, cols);
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}


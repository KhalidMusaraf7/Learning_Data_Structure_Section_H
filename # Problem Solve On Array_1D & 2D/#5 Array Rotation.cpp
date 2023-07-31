#include <iostream>
using namespace std;

void rotateLeft(int arr[], int size, int rotationCount) {
    for (int i = 0; i < rotationCount; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

int main() {
    int array[] = {5, 8, 2, 10, 3};
    int size = sizeof(array) / sizeof(array[0]);
    int rotationCount = 2; // Rotate left twice

    rotateLeft(array, size, rotationCount);

    cout << "Rotated Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}


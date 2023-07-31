#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        // The array should have at least two elements
        cout << "Error: Array size is less than 2." << endl;
        return -1;
    }

    int largest = arr[0];
    int secondLargest = arr[1];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int array[] = {5, 8, 2, 10, 11, 3};
    int size = sizeof(array) / sizeof(array[0]);

    int secondLargest = findSecondLargest(array, size);

    if (secondLargest != -1) {
        cout << "Second Largest Element: " << secondLargest << endl;
    }

    return 0;
}


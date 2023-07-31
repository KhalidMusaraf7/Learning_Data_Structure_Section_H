#include <iostream>
#include <algorithm> // For using the sort function

using namespace std;

double findMedian(int arr[], int size) {
    sort(arr, arr + size); // Sorting the array in ascending order

    if (size % 2 == 1) {
        return arr[size / 2];
    } else {
        int mid = size / 2;
        return (arr[mid - 1] + arr[mid]) / 2.0;
    }
}

int main() {
    int arr[] = {5, 2, 7, 1, 8, 3, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    double median = findMedian(arr, size);
    cout << "Median: " << median << endl;

    return 0;
}


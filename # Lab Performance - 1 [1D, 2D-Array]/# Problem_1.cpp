#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};

    cout << "Array in normal order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array in reverse order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


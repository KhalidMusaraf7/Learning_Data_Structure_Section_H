#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};

    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << " even numbers" << " "<< evenCount<< endl;
    cout << " odd numbers" << " "<< oddCount  << endl;

    return 0;
}


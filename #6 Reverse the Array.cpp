#include <iostream>
using namespace std;

int main() {
    int array[] = {5, 8, 2, 10, 3};
    int size = sizeof(array) / sizeof(array[0]);

    int temp;
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

     cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
      cout << array[i] << " ";
    }
     cout << std::endl;

    return 0;
}


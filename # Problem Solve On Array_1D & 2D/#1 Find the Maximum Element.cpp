#include <iostream>
using namespace std;

int main() {
    int array[] = {5, 8, 2, 10, 11, 3};
    int size = sizeof(array) / sizeof(array[0]);

    int maxElement = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }

   cout << "Maximum Element: " << maxElement << std::endl;

    return 0;
}


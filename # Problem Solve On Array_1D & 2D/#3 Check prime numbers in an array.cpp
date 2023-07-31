#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int array[] = {5, 2, 7, 1, 8, 3, 4, 6, 11, 9};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Prime or Not Prime for each element:" <<endl;
    for (int i = 0; i < size; i++) {
        if (isPrime(array[i])) {
          cout << array[i] << " is prime." <<endl;
        } else {
         cout << array[i] << " is Not prime." <<endl;
        }
    }

    return 0;
}


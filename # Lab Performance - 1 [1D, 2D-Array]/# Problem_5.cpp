#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int factorial(int num) {
    int fact = 1;

    if (isPrime(num)) {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    } else {
        cout << "Error! Not a prime number." << endl;
        return -1;
    }
}

int main() {
    int input;
    cout << "Input: ";
    cin >> input;

    int result = factorial(input);
    if (result != -1) {
        cout << "Output: " << result << endl;
    }

    return 0;
}


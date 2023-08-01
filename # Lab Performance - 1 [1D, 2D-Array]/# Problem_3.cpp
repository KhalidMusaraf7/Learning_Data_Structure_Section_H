#include <iostream>
using namespace std;

void printOddNumbers(int start, int end) {
    if (start % 2 == 0) {
        start++;
    }

    for (int i = start; i <= end; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter the starting value of the range: ";
    cin >> start;
    cout << "Enter the ending value of the range: ";
    cin >> end;

    cout << "Odd numbers between " << start << " and " << end << ": ";
    printOddNumbers(start, end);

    return 0;
}


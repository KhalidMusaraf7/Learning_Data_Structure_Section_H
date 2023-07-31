#include <iostream>
using namespace std;

int majorityElement(int arr[], int size) {
    int majorityElement = arr[0];
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == majorityElement) {
            count++;
        } else {
            count--;
            if (count == 0) {
                majorityElement = arr[i];
                count = 1;
            }
        }
    }

    return majorityElement;
}

int main() {
    int nums[] = {3, 2, 3, 2, 3, 1, 3, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int majority = majorityElement(nums, size);
    cout << "Majority Element: " << majority << endl;

    return 0;
}


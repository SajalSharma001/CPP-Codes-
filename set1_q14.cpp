#include <iostream>
using namespace std;

int binarySearch(int sortedArray[], int len, int target) {
    int st = 0, end = len - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (sortedArray[mid] < target) {
            st = mid + 1;
        } else if (sortedArray[mid] > target) {
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int sortedArray[] = {1, 5, 9, 13, 14, 15, 20};
    int len = sizeof(sortedArray) / sizeof(sortedArray[0]);

    cout << binarySearch(sortedArray, len, 15);
    return 0;
}
#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k) {
    if (s > e) {
        return false;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == k) {
        return true;
    }

    if (arr[mid] < k) {
        return binarySearch(arr, mid + 1, e, k);
    } else {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int key = 5;

    bool result = binarySearch(arr, 0, size - 1, key);

    if (result) {
        cout << "Key found at index " << result << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}

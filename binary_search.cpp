// Binary Search implementation
// Searches for a value in a sorted array
// Returns the index if found, -1 otherwise
// Time complexity: O(log n)
// Implemented during university programming exercises

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 4;
    int idx = binary_search(arr, n, key);
    if(idx != -1) cout << "Found at index: " << idx << endl;
    else cout << "Not found" << endl;
    return 0;
}

// Insertion Sort implementation
// Sorts an array of integers in ascending order
// Time complexity: O(n^2) in worst case
// Space complexity: O(1)
// Implemented during university programming exercises

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void print_array(int arr[], int n) {
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    cout << "Sorted array: ";
    print_array(arr, n);
    return 0;
}

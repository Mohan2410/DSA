#include <iostream>
using namespace std;

// Binary Search function
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) 
            return mid;  // Key found at index mid

        if (arr[mid] < key) 
            left = mid + 1; // Search in the right half
        else 
            right = mid - 1; // Search in the left half
    }
    
    return -1; // Key not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);
    
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}

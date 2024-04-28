#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid; 
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}

int main() {
    int arr[] = {6, 12, 23, 45, 54, 78, 39};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}

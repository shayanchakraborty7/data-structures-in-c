#include <stdio.h>

void insertionsort_asc(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) { // Change to > for ascending sort
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void createarray(int arr[], int n) {
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printarray(int arr[], int n) {
    printf("The entered array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    createarray(arr, n);
    printf("\nBefore sorting:\n");
    printarray(arr, n);
    insertionsort_asc(arr, n);
    printf("\nAfter sorting in ascending order:\n");
    printarray(arr, n);

    return 0;
}

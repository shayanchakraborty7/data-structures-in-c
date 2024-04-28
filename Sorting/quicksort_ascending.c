#include <stdio.h>

int partition_asc(int arr[], int low, int high) {
    int pivot = arr[low];
    int start = low + 1;
    int end = high;

    while (start <= end) {
        while (arr[start] <= pivot ) {
            start++;
        }
        while (arr[end] > pivot ) {
            end--;
        }
        if (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[end];
    arr[end] = temp;

    return end;
}

void quicksort_asc(int arr[], int low, int high) {
    if (low < high) {
        int loc = partition_asc(arr, low, high);
        quicksort_asc(arr, low, loc - 1);
        quicksort_asc(arr, loc + 1, high);
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
    quicksort_asc(arr, 0, n - 1);
    printf("\nAfter sorting in ascending order:\n");
    printarray(arr, n);

    return 0;
}

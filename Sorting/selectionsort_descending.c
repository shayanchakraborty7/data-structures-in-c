#include <stdio.h>

void selectionsort_desc(int arr[], int n) {
    int i, j, max;
    for (i = 0; i < n - 1; i++) {
        max = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[max]) { // Change comparison to '>'
                max = j;
            }
        }
        if (max != i) {
            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
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
    selectionsort_desc(arr, n);
    printf("\nAfter sorting in descending order:\n");
    printarray(arr, n);

    return 0;
}

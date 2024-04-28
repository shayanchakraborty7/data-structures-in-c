#include <stdio.h>

int main() {
    int arr[100], n;
    int count[100] = {0}; // To store the count of occurrences for each element

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter array elements:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            count[arr[i]]++;
        }

        printf("Duplicate elements and their occurrences:\n");
        for (int i = 0; i < n; i++) {
            if (count[arr[i]] > 1) {
                printf("%d occurs %d times\n", arr[i], count[arr[i]]);
                count[arr[i]] = 0; // Reset count to avoid duplicate output
            }
        }
    }

    return 0;
}

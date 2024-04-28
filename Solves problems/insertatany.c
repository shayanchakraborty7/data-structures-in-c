#include <stdio.h>


void insertatany(int arr[], int *n, int index, int num){

    for (int i = *n - 1; i > index - 1;i--){
        arr[i + 1] = arr[i];
    }
    arr[index] = num;
    (*n)++;
}

void print(int arr[], int n){
    for (int i = 0; i < n;i++){
        printf(" %d ", arr[i]);
    }
}
int main(){
    int arr[100], n, index, num;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if(n>0){
        printf("\nEnter the array elements\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            }
            printf("\nBefore insertion\n");
            print(arr, n);
            printf("\nEnter the index you want to insert at: ");
            scanf("%d", &index);
            printf("Enter the number you want to insert: ");
            scanf("%d", &num);
            insertatany(arr, &n, index, num);
            printf("\nAfter insertion\n");
            print(arr, n);
        }
        else{
            printf("Size cannot be 0 or less");
        }
    

    return 0;
}
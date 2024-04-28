#include <stdio.h>


void merge(int arr[], int arr2[], int s1,int s2){
    int i,j;
    for (i = s1, j = 0; j < s2;i++,j++){
        arr[i] = arr2[j];
    }
    }


void arrayinput(int arr[],int n){
    printf("\nEnter the array elements\n");
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
}

void print(int arr[],int n){
    for (int i = 0; i < n;i++){
        printf(" %d ", arr[i]);
    }
}
int main(){
    int arr[100], s1, arr2[100], s2;

    printf("Enter size of array 1: ");
    scanf("%d", &s1);
    
    printf("Enter size of array 2: ");
    scanf("%d", &s2);

    if(s1 > 0 && s2 >0){
        arrayinput(arr, s1);
        arrayinput(arr2, s2);
        printf("\nBefore merging\n");
        print(arr, s1);
        printf("\n");
        print(arr2, s2);

        merge(arr, arr2, s1, s2);
        printf("\nAfter merging\n");
        int total = s1 + s2;
        print(arr, total);

    }


    return 0;
}
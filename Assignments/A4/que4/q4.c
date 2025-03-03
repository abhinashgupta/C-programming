#include<stdio.h>

void array_elements(int arr[],int size){
    int i,temp;

    //taking array elements as input one by one
    printf("Enter the %d elements of array : ",size);
    for (i = 0; i < size;i++){
        scanf("%d", &arr[i]);
    }
    
    //Original Array traversing and printing
    printf("Array Elements : ");
    for (i = 0; i < size;i++){
        printf("%d ", arr[i]);
    }

    //Reverse the array using two pointer approach
    for (i = 0; i < size/2;i++){
        temp = arr[i];
        arr[i]=arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    printf("\nReversed Array: ");
    for (i = 0; i < size;i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    array_elements(arr, size);
}
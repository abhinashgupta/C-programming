#include<stdio.h>

void input_taking(int *size,int arr[]){
    printf("Enter the size of the array : ");
    scanf("%d", size);
    printf("Enter the %d array elements : ", *size);  //size is a pointer (int *size), meaning it stores the memory address of an integer, not the integer itself.
    for (int i = 0; i < *size;i++){  //size is a pointer (int *size), meaning it stores the memory address of an integer, not the integer itself.
        scanf("%d", &arr[i]);
    }
}
int arr_Sum(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int size, arr[100];  //If you just declare int *arr; in main(), it is just a pointer and does not have memory allocated for storing elements. When we pass it to input_taking(), it does not automatically allocate memory for storing size elements.
    input_taking(&size,arr);
    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int sum = arr_Sum(arr, size);
    printf("Sum of the first n natural number of array is : %d", sum);
}
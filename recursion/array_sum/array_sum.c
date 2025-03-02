#include<stdio.h>
int sumOfArray(int arr[],int size){
    if(size<=0){
        return 0;
    }
    return arr[size - 1] + sumOfArray(arr, size - 1);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfArray(arr, size);
    printf("%d", sum);
}
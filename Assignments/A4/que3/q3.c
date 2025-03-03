#include<stdio.h>

void array_elements(int arr[],int size){
    int i,average=0;
    printf("Enter the %d elements : ", size);
    for (i = 0; i < size;i++){
        scanf("%d", &arr[i]);
    }
    printf("Array Elements : ");
    for (i = 0; i < size;i++){
        printf("%d ", arr[i]);
        average+=arr[i];
    }
    printf("\nAverage of the array is : %f",(float)average/size);
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    array_elements(arr, size);
}
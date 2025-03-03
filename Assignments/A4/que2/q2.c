#include<stdio.h>

void array_elements(int arr[],int size){
    int i;
    printf("Enter the %d elements : ", size);
    for (i = 0; i < size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Array elements : ");
    for (i = 0; i < size;i++){
        printf("%d ", arr[i]);
    }

    int maximum = arr[0], minimum = arr[0];
    for (i = 0; i < size;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
        else if(arr[i]<minimum){
            minimum = arr[i];           
        }
    }
    printf("\nMaximum : %d\n", maximum);
     printf("Minimum : %d\n", minimum);
}
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    array_elements(arr,size);
    return 0;
}
#include<stdio.h>
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5;i++){
//         printf("%d ", arr[i]);
//     }
// }

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++){  //sizeof(arr) is 20 bytes - 4*5=20 and sizeof(arr[0]) is 4 bytes , so 20/4 = 5 , means the length of the array
        printf("%d ", arr[i]);
    }
}
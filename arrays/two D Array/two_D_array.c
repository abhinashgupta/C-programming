#include<stdio.h>
int main(){
    int arr[3][3] = {{23, 48, 19}, {32, 45, 9}, {90, 51, 4}};
    for (int i = 0; i <=2;i++){
        for (int j = 0; j <= 2;j++){
           printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("arr[2][2] is %d\n", arr[2][2]);
    printf("arr[3][3] is %d", arr[3][3]);  //it will throw garbage value as output arr[3][3] is 1398350784 because the 3 row index and 3 column index doesn't exist and we're trying to access them that's why it is giving garbage value  
} 
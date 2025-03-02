#include<stdio.h>
int main(){
    int a=0,b=1,next,n;
    printf("Enter the value till you want to print the fibonacci series : ");
    scanf("%d",&n);
    printf("%d %d ", a, b);
    // for (int i = 3; i <= n;i++){ //using for loop
    //     next = a + b;
    //     a = b;
    //     b = next;
    //     printf("%d ", next);
    // }
    int i = 3;      //using while loop
    while(i<=n){
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
        i++;
    }
}

// 0 1 1 2 3 5 8 13
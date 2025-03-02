#include<stdio.h>
int main(){
    int sum=0,n;
    printf("Enter a number , till you want sum of : ");
    scanf("%d",&n);
    for (int i = 0; i <= n;i++){
        sum = sum + i;
    }
    printf("Sum of values are : %d", sum);
}
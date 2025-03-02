#include<stdio.h>
int main(){
    int fact = 1, n;
    printf("Enter a number , you want factorial of : ");
    scanf("%d", &n);
    for (int i = 1; i <= n;i++){
        fact = fact * i;
    }
    printf("Factorial of %d is : %d", n, fact);
}
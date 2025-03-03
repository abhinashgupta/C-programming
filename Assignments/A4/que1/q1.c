#include<stdio.h>


void taking_input(int *num1,int *num2){
    printf("Enter the values of num1 nad num2 : ");
    scanf("%d %d", num1, num2);
}
int add(int a,int b){
    return a + b;
}
int main(){
    int num1, num2;
    taking_input(&num1, &num2);
    int res = add(num1,num2);
    printf("Sum of %d and %d is : %d",num1,num2, res);
    return 0;
}
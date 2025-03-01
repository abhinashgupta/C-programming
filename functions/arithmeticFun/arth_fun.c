#include<stdio.h>

void input_taking(int*,int*);
int add(int a,int b){
    return a + b;
}

int sub(int a,int b){
    return a - b;
}

int multi(int a,int b){
    return a * b;
}

float div(int a,int b){
    float m = (float)a;
    float n = (float)b;
    return m / n;
}



int main(){
    int num1,num2,res;
    input_taking(&num1, &num2);
    res =  add(num1,num2);
    printf("Sum of %d and %d is : %d\n",num1,num2, res);
    res = sub(num1, num2);
    printf("Substraction of %d and %d is : %d\n",num1,num2, res);
    res = multi(num1, num2);
    printf("Multiplication of %d and %d is : %d\n",num1,num2, res);
    float f=(float)res;
    f = div(num1, num2);
    printf("Division of %d and %d is : %.2f\n",num1,num2, f);
}

void input_taking(int *num1,int *num2){
    printf("Enter the value of num1 and num2 : ");
    scanf("%d %d", num1, num2);
}
#include<stdio.h>

int input_taking(){
    int num;
    printf("Enter a number of factorial you want : ");
    scanf("%d", &num);
    return num;
}
int fact(int n){
    if(n>0){
        return n * fact(n - 1);
    }
    else{
        return (1);
    }
}
int main(){
    int num;
    num = input_taking();
    int n = fact(num);
    printf("Factorial of %d is : %d",num,n);
}
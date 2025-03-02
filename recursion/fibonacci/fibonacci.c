#include<stdio.h>
int fib(int n){
    if (n==0){
        return 0;
    }
    else if(n==1 || n==2){
        return 1;
    }
    else{
        return fib(n - 1) + fib(n - 2);
    }
}
int taking_input(){
    int input;
    printf("Enter the value till you want to print fibonacci series : ");
    scanf("%d", &input);
    return input;
}
int main(){
    int i,n;
    n=taking_input();
    for (int i = 0; i <= n;i++){
        printf("%d ", fib(i)); 
    }
}
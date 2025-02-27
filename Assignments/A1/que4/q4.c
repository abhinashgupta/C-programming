#include<stdio.h>
int b=20;  //global varibale
void new(){
    int a = 11; //local variable
    printf("%d",a);
}
int main(){
    int a=10;
    b=30;
    new();
    printf(" %d %d",a,b);
}
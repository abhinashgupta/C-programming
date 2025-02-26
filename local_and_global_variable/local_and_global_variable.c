#include<stdio.h>
int b=20;
void new(){
    int a=11;
    printf("%d",a);
}
int main(){
    int a=10;
    b=30;
    new();
    printf(" %d %d",a,b);
}
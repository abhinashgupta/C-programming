#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped values of a and b are %d %d", a, b);
}
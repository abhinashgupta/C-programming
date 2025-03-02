#include<stdio.h>
int main(){
    int a = 10, b = 5, c = 4,res;
    res = a + b * c;
    printf("%d\n", res);
    res = (a + b) * c;
    printf("%d", res);
}
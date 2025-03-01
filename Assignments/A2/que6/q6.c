#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the values of a,b and c : ");
    scanf("%d %d %d", &a, &b, &c);
    (a == b || b == c) ? printf("All values are equal") : (a > b && a > c) ? printf("A is greatest"): (b > a && b > c) ? printf("B is greatest"): printf("C is greatest");
}
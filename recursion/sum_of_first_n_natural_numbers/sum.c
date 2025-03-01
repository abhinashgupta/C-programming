#include<stdio.h>
int input(){
    int a;
    printf("Enter number for addition of first n natural number : ");
    scanf("%d", &a);
    return a;
}
int fun(int a){
    int s;
    if(a==1)
        return a;
    s = a + fun(a - 1);
    return s;
}
int main(){
    int k,number;
    number=input();
    k= fun(number);
    printf("Sum of first n natural number is : %d", k);
}
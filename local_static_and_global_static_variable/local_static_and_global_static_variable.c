#include<stdio.h>
// void new(){
//     static int a=11;
//     a++;
//     printf("%d\n",a);
// }
// int main(){
//     new();
//     new();
//     new();
// }

static int g=0;
void fun1(){
    g++;
    printf("%d ",g);
}
int main(){
    fun1();
    fun1();
    printf("%d",g);
}
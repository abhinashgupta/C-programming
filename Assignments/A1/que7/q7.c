#include<stdio.h>
static int g=0;  //static global variable
void fun1(){
    static int t = 0;   //static local variable
    t++;                //static local variable updation
    printf("%d ",t);
}
int main(){
    g++;    //static global variable updation
    fun1();
    fun1();
    printf("%d",g);
}
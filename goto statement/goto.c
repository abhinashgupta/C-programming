#include<stdio.h>
int main(){
    int x = 10;
    if(x=10){
        goto positive;
    }
    printf("jjjjj");   //it will not consider this line , it will directly jump to positive
    positive:{
        printf("positive ");
        printf("positive check");
    }
}
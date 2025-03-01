#include<stdio.h>
int main(){
    int x = 10;
    if(x=10){
        goto positive;
    }
    printf("jjjjj");
    positive:{
        printf("positive");
    }
    
}
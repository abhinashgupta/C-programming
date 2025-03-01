#include<stdio.h>
int main(){
    int i;
    for (i = 1; i <= 10;i++){
        if(i==4){          
            continue;       //it skips the value when condition meets the value
        }
        printf("%d ", i);
    }
}
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,operation;
    while(1){
    printf("\nEnter the two values : ");
    scanf("%d %d",&a,&b);
    printf("Choose the operation, you want to perform!\n0.Exit\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&operation);
    
    if(operation==1){
        printf("Addition of %d and %d is : %d",a,b,a+b);
    }
    else if(operation==2){
        printf("Substraction of %d and %d is : %d ",a,b,a-b);
    }
    else if(operation==3){
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
    }
    else if(operation==4){
        printf("Division of %d and %d is : %f",a,b,(float)a/b);
    }
    else{
        exit(0);
    }
    }
    return 0;
}
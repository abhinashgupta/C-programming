#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Both values are equal");
    }
    else if(a>b){
        printf("A is Maximum %d\n",a);
        printf("B is Minimum %d\n",b);
    }
    else if(b>a){
        printf("B is Maximum %d\n",b);
        printf("A is Minimum %d\n", a);
    }
}
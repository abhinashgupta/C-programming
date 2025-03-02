#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the values of a,b and c : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("All the values are equal");
    }
    else if(a>b && b>c){
        printf("A is Maximum %d",a);
    }
     else if(b>c && b>a){
        printf("B is Maximum %d",b);
    }
    else{
        printf("C is Maximum %d",c);
    }
}
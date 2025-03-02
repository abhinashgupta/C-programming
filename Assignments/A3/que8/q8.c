#include<stdio.h>
int main(){
    int n;
    printf("Enter number you want multiplication table of : ");
    scanf("%d",&n);
    for (int i = n; i<=n;i++){
        for (int j = 1; j <= 10;j++){
            printf("%d ", i*j);
        }
    }
    return 0;
}
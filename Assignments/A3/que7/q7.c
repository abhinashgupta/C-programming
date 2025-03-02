#include<stdio.h>
int main(){
    int n,rev=0;
    printf("Enter a number, you want reverse of : ");
    scanf("%d", &n);
    // for (int i = 0; i <=n;i++){    //using for loop
    //     int ld = n % 10;
    //     n /= 10;
    //     rev = rev * 0 + ld;
    //     printf("%d", rev);
    // }
    int i = 1;
    do{
        int ld = n % 10;
        n /= 10;
        rev = rev * 10 + ld;
    } while (n>0);
    printf("%d", rev);
}

// n=235  ld=5 n=23 rev=5
// n=23   ld=3 n=2  rev=3
// n=2    ld=2 n=0  rev=2 
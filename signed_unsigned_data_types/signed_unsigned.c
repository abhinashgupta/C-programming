#include<stdio.h>
// int main(){
//     signed int a=-10;  //stores both positive and negative values
//     unsigned int b=-10; //stores only postitve values
//     printf("%d %d",a,b);
// }
//output - -10 -10 , because we are printing b (an unsigned int) using %d, which is the format specifier for signed integers (int). This causes undefined behavior, and the output may look as if b is storing a negative value, but it is actually storing a large positive value due to integer overflow.

// int main(){
//     signed int a=-10;  //stores both positive and negative values
//     unsigned int b=-10; //stores only postitve values
//     printf("%d %u",a,b);
// }

// output - -10 4294967286 , because When you assign -10 to an unsigned int, C converts it into its unsigned equivalent using two’s complement representation. Since unsigned int uses modulo 2^32 (for 4-byte int) arithmetic, -10 is stored as: 2^32 − 10 = 42949672862

int main(){
    signed int a=-10;  //stores both positive and negative values
    unsigned int b=10; //stores only postitve values
    printf("%d %u",a,b);
}
// output- -10 10
#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    char n;
    printf("Enter the character you want to print :");
    ch=getchar(); //it will take the character from the user and we cannot directly put ch int paranthesis of getchar
    putchar(ch);  // it will display the output of the character
    n=putchar(ch);  // it will display the output as well and string the character into the n variable as well
    printf("%c", n); // it will print the character of n 
}

//Using getchar() and putchar() are simpler for character I/O because they do not require a format string as do scanf() and printf(). 
//getchar reads only one character from the standard input, while scanf can read multiple values based on the format specifier provided. 
//When only needing a single character, using getchar can be slightly more efficient than scanf as it avoids the overhead of parsing a format string. 

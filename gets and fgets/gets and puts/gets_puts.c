// #include<stdio.h>
// int main(){
//     char n;
//     char ch[10]; //we can pass any size of the string here but the size that we pass in the fgets , only that size of string will shown in the output
//     fgets(ch,20,stdin); //it will take the string input from the user and also take size of the string and it only stored the desired size of the string that is passed 
//     // fgets(ch,sizeof(ch),stdin); //it will take the string input from the user and also take size of the string as defined above in the ch array of string and it only stored the desired size of the string that is passed in the char array of string 
//     puts(ch);   //it will display the string
//     printf("%s\n", ch); // it will also display the string
//     n=puts(ch);   //puts can't assign the value to any variable , it will throw incorrect output
//     printf("%s\n", n); // it will also display incorrect output
// }


//gets is not working anymore it is throwing error

// #include<stdio.h>  
// void main ()  
// {  
//     char s[30];  
//     printf("Enter the string? ");  
//     gets(s);  
//     printf("You entered %s",s);  
// }  


// strcspn used for removing special character,numeric values form the string
#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    // ch[strcspn(ch, "!@")] = 0; 
    int pos = strcspn(ch, "!@");
    printf("%d", pos);
    puts(ch);
}

// The strcspn() function searches for the first occurrence in a string of any of the specified characters and returns the length of the string up to that point. If none of the characters are found then the length of the string is returned.

//  ch[strcspn(ch, "!@")] = 0; - it will return the string before ! symbol 
//  ch[strcspn(ch, "!@")] = 1; - it will remove this ! symbol and return the string upto the size of the string 
//  int pos = strcspn(ch, "!@"); - it will simply return the size of the string and also before ! this symbol and if we didn't provide any symbol then it will return the size of the string.
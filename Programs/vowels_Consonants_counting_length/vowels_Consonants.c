#include<stdio.h>
#include<ctype.h>
void vowel_Consonants_Counting(char str[],int *vowels,int *consonants){
    for (int i = 0; str[i] != '\0';i++){
        char ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            (*vowels)++;
        }
        else if(ch>='a' && ch<='z'){
            (*consonants)++;
        }
    }
}
int main(){
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    vowel_Consonants_Counting(str,&vowels,&consonants);
    printf("Vowels : %d\n", vowels);
    printf("Consonants : %d", consonants);
}
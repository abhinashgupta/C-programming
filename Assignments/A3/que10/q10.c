#include<stdio.h>
int main(){
    int num1, num2;
    char arth;
    printf("Enter num1 and num2 values : ");
    scanf("%d %d", &num1, &num2);
    printf("Enter arithmetic character input for doing operation like +,-,*,/ : \n");
    scanf(" %c",&arth);
    switch(arth){
        case '+':
            printf("Sum of %d and %d is : %d", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Substraction of %d and %d is : %d", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Multiplication of %d and %d is : %d", num1, num2, num1 * num2);
            break;
        case '/':
            printf("Division of %d and %d is : %f", num1, num2, (float)num1 / num2);
            break;
        default:
            printf("Invalid input! Please enter write character like +,-,*,/");
            break;
    }
}
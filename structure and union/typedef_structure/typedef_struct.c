#include<stdio.h>
typedef struct {
    char name[20];
    int age;
    int salary;
    char address[100];
}Person;

// typedef struct Person{  //it will throw error because when using class storage specifier typedef we have to declare the Person variable name at the end not just in starting
//     char name[20];   // if we want that it will work properly then we have to remove typedef then using struct keyword , we can use the declared structure variable properly
//     int age;
//     int salary;
//     char address[100];
// };

int main(){
    Person p1 = {"Abhinash Gupta", 22, 0, "Bengaluru"};
    printf("%s\n%d\n%d\n%s", p1.name, p1.age, p1.salary, p1.address);
}
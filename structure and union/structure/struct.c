#include<stdio.h>
#include<string.h>
struct person{
    char name[20]; //20 bytes
    int age; //4 bytes
    char address[100]; //100 bytes
    int salary; //4 bytes
};
//Total memory occupies : 20+4+100+4 =128 bytes

//nested Structures
struct employee{
    int emp_Id;
    struct person p;
};

int main(){
    struct person p1;
    // p1.name = "Abhinash Gupta";  //In C, we cannot assign a string to a character array using = after declaring the structure.name and address are arrays, so direct assignment is not allowed.
    strcpy(p1.name, "Abhinash Gupta"); //To assign a string to a character array, use strcpy() from <string.h>, This copies "Abhinash Gupta" into p1.name (instead of trying to assign a pointer).strcpy() works character by character, ensuring the full string is copied.
    p1.age = 22;
    strcpy(p1.address, "Bengaluru");
    // p1.address = "Benagluru"; //In C, we cannot assign a string to a character array using = after declaring the structure.name and address are arrays, so direct assignment is not allowed.
    p1.salary = 0;
    struct person p2 = {"Monu", 22, "Bengaluru", 0};

    printf("\nNormal Initialization and copying the char of array using strcpy : \n");
    printf("%s\n%d\n%s\n%d\n\n",p1.name, p1.age , p1.address, p1.salary);

    printf("Direct Initialization at Declaration : \n");
    printf("%s\n%d\n%s\n%d\n\n",p2.name, p2.age , p2.address, p2.salary);

    //Nested Structure initialization and declaration
    struct employee e1={209981,"Kunal",21,"Bhopal",0};
    printf("%d\n%s\n%d\n%s\n%d\n",e1.emp_Id,e1.p.name,e1.p.age , e1.p.address, e1.p.salary);
    
}
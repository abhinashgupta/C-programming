#include<stdio.h>
#include<string.h>
union person{
    char name[20];  //20 bytes
    int age;        // 4 bytes
    char address[100]; //100 bytes
    int salary;      // 4 bytes
};
//Total memory ocuppies = 100 bytes because union only takes the higher bytes size of data type

int main(){
    union person p1;
    strcpy(p1.name,"Abhinash Gupta");
    // p1.age = 22;
    // strcpy(p1.address,"Bengaluru");
    // p1.salary = 0;
    printf("%s\n",p1.name); //we can only acces one member at a time , if we try to access two or more data members at a time it will overwrites the previous data.
   
    printf("Direct Initialization at Declaration : \n");
    union person p2 = {"Monu Gupta"};  //only one member can assign a value at a time in union
    printf("%s\n",p2.name); //we can only acces one member at a time , if we try to access two or more data members at a time it will overwrites the previous data.   
}


// union person p2 = {"Monu Gupta",22,"Bengaluru",0};  //It will not work properly because union only stores one value at a time, and C only allows direct initialization for the first member.
// A union in C shares memory among all its members. This means that at any given time, only one member of the union holds a meaningful value. Whenever a new member is assigned a value, it overwrites the previous data.
// struct allocates separate memory for each member, so no data is overwritten.
// union shares the same memory among all members, meaning only one value can be stored at a time.
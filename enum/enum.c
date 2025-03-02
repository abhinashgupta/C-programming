#include<stdio.h>
enum Day{M, T, W, Th, F, S, Su};
enum Traffic_Lights
{
    RED,
    GREEN,
    YELLOW
};
enum Colors
{
    BROWN,
    BLUE,
    PINK
};


int main(){
    enum Day today;
    today = W;
    enum Traffic_Lights Signal;
    enum Colors color;
    color = BLUE;
    Signal = GREEN;
    if(Signal==RED){
        printf("Stop\n");
    }else if(Signal==YELLOW){
        printf("Caution\n");
    }else{
        printf("Go\n");
    }
    printf("Today is %d\n", today);
    printf("Today is %d", color);
}

//enum-enumeration
// By default, the first value starts at 0, and each subsequent value increases by 1.
// We cannot store the same values in the different enumerators
// ✅ enum stores named integer constants.
// ✅ It improves code readability.
// ✅ Default values start from 0 and increment by 1.
// ✅ To print names, use a string array.
// ✅ Real-life uses: Days of the week, Traffic lights, User roles.
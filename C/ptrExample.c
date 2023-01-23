/* to compile: gcc -o ptrExample ptrExample.c */

#include <stdio.h>

int main(){
    int myValue;
    int *myPtr;
    myValue = 15;
    myPtr = &myValue;
    printf("myValue is equal to : %d\n", myValue);
    *myPtr = 25;
    printf("myValue is equal to : %d\n", myValue);
}



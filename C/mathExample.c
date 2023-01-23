/* to compile: gcc -o mathExample mathExample.c */

#include <stdio.h>
#include <math.h>
int main(){
    double myNumber = 2.2;
    int times = 8 ;
    printf("Square root of %lf is: %lf\n", myNumber, sqrt(myNumber));
    printf("%lf raise to the power of %d is %lf\n", myNumber, times, pow(myNumber, times));
    return 0;
}



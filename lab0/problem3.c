//Author: Donovan Givens
// This is a Function that takes a declared series of variables and puts them 
// Them through a sequence of computations using print statements


#include <stdio.h>

int main() {
    //Declared variable series
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    //print statements with computation sequences 
    //used with the declared variable series
    printf("a + c = %d\n", a + c);
    printf("x + c = %d\n", (int)(x + c));
    printf("dx + x = %d\n", (int)(dx + x));
    printf("((int) dx) + ax = %ld\n", (long)((int)dx) + ax);
    printf("a + x = %d\n", (int)(a + x));
    printf("s + b = %d\n", s + b);
    printf("ax + b = %ld\n", ax + b);
    printf("s + c = %d\n", s + c);
    printf("ax + c = %ld\n", ax + c);
    printf("ax + ux = %lu\n", ax + ux);

    return 0;
}

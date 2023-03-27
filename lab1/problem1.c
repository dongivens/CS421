//Donovan Givens
//This is a C program that converts a string to an INT
//Then outputs that string +5 (i.e 25 +5 = output: 30)


#include <stdio.h>
#include <stdlib.h>

//function that converts string to an int
int main() {
    char str[10];
    int num;

    printf("Input an integer: ");
    fgets(str, 10, stdin);
    //output algrothim that +5 to the Int
    num = atoi(str);
    printf("Output: %d\n", num + 5);

    return 0;
}
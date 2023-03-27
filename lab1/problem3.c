//Donovan Givens
//This is a C program that ask for an input of 3 #'s
//Then inputs it in to an empty array
//From there it takes the array and averages it out
//i.e [5.00,12.00,18.00] ouptut: 11.67

#include <stdio.h>
#include <stdlib.h>

int main() {
    double arr[3];
    double sum = 0.0;
    int i;
    char str[10];
    //For loop that requires an input of numbers for the array
    for (i = 0; i < 3; i++) {
        printf("Enter a number: ");
        fgets(str, 10, stdin);
        arr[i] = atof(str);
    }
    //prints out the array
    printf("The array is [");
    for (i = 0; i < 3; i++) {
        printf("%.2f", arr[i]);
        if (i < 2) {
            printf(", ");
        }
    }
    printf("].\n");

    for (i = 0; i < 3; i++) {
        sum += arr[i];
    }
    //prints the average of the array
    printf("The average of the array values is %.2f.\n", sum / 3);

    return 0;
}
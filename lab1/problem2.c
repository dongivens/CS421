//Donovan Givens
//This is a C program that takes an array of 5 double values
//& gathers/output the sum off the array of doubles 
//i.e [4.00, 1.00, 3.00, 2.00, 5.00] ouput: 15.00.

#include <stdio.h>
//Funtction that creates the array to be summed up
int main() {
    double arr[5] = {5.0, 8.0, 10.0, 13.0, 19.0};
    double sum = 0.0;
    int i;
    //prints the input array choice
    printf("The array is [");
    for (i = 0; i < 5; i++) {
        printf("%.2f", arr[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("].\n");

    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }
    //prints the sum of the array
    printf("The sum of the array is %.2f.\n", sum);

    return 0;
}
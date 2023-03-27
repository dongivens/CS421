//By: Donovan Givens
//This is a C program that takes an input of 6 numbers and puts two diffrent arrays array1(3) & array2(3)
//From there the program then merges both arrays into a new array

#include <stdio.h>

int main() {
    double arr1[3], arr2[3], merged[6];
    int i;
    //prints line Break statement as well as allow input for array 1
    printf("--------------------------------\n");
    printf("Enter the first array's values\n");
    printf("--------------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("Enter a number: ");
        scanf("%lf", &arr1[i]);
    }
    //prints line break statement as well as allow input for array 2
    printf("--------------------------------\n");
    printf("Enter the second array's values\n");
    printf("--------------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("Enter a number: ");
        scanf("%lf", &arr2[i]);
    }
    //for loop to merge arrays together
    for (i = 0; i < 3; i++) {
        merged[i * 2] = arr1[i];
        merged[i * 2 + 1] = arr2[i];
    }
    //ouputs the merged array between array 1 + array 2 = newArray
    printf("\nThe merged array is [%.2lf", merged[0]);
    for (i = 1; i < 6; i++) {
        printf(", %.2lf", merged[i]);
    }
    printf("].\n");

    return 0;
}
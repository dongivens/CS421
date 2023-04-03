//Donovan Givens 
//Structures exercise
//this code Define a new data structure in a C program,
// named "person", which will contains a string
// (pointer to char) called name, and an integer
// called age.

#include <stdio.h>
#include <stdlib.h>

struct person {
    char* name;
    int age;
};

int main() {
    // Creating a person struct
    struct person p1;
    p1.name = "John";
    p1.age = 30;

    // Printing out the person's name and age
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return 0;
}

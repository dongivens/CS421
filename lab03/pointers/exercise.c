//By Donovan Givens
//This code creates a pointer attached to the local var 'n' 
//which is called 'pointer_to_n.' it then is used to increase
//the value of 'n' by one

#include <stdio.h>

int main() {
    int n = 10;
    // creates pointer to n
    int* pointer_to_n = &n; 
    printf("n before: %d\n", n);
   
    // increases value of n through the pointer
    (*pointer_to_n)++; 
    printf("n after: %d\n", n);

    return 0;
}

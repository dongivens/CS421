//By Donovan Givens
//unions
//intparts example


/*the code below allows users to read a variable's memory 
in different ways, for example read an integer 
 one byte at a time, you could have something 
 like this:*/
#include <stdio.h>

union intParts {
  int theInt;
  char bytes[sizeof(int)];
};

int main() {
    union intParts parts;
    parts.theInt = 5968145; // arbitrary number > 255 (1 byte)

    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
    parts.theInt, parts.bytes[0], parts.bytes[1], parts.bytes[2], parts.bytes[3]);

    int theInt = parts.theInt;
    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
    theInt, *((char*)&theInt+0), *((char*)&theInt+1), *((char*)&theInt+2), *((char*)&theInt+3));

    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
    theInt, ((char*)&theInt)[0], ((char*)&theInt)[1], ((char*)&theInt)[2], ((char*)&theInt)[3]);

    return 0;
}

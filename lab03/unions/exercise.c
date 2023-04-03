//By Donovan Givens
//Unions excercise

/*
This code Create a union that stores an array of 21 characters
 and 6 ints (6 since 21 / 4 == 5, but 5 * 4 == 20 
 so you need 1 more for the purpose of this exercise),
you will set the integers to 6 given values and 
then print out the character array 
both as a series of chars and as a string.
*/
#include <stdio.h>
#include <string.h>

union MyUnion {
  char char_arr[21];
  int int_arr[6];
};

int main() {
  union MyUnion u;
  int i;

  // set the integers to 6 given values
  for (i = 0; i < 6; i++) {
    u.int_arr[i] = i * 10;
  }

  // print out the character array as a series of chars
  printf("Character array as series of chars: ");
  for (i = 0; i < 21; i++) {
    printf("%c", u.char_arr[i]);
  }
  printf("\n");

  // print out the character array as a string
  printf("Character array as string: %s\n", u.char_arr);

  return 0;
}

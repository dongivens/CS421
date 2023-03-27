//By: Donovan Givens
//This is a C program that modifes the given program to declare grades as 2D array, 
//complets the for loops by dtermining the terminating conditions, and  computes
//the min ad maxumuim grades obtained in each subject 

#include <stdio.h>
#include <stdlib.h>

int main() {
  //declares the 2D array (grades) 2 rows X 5 columns 
  int grades[2][5];
  float min, max;
  int i;
  int j;

  grades[0][0] = 80;
  grades[0][1] = 70;
  grades[0][2] = 65;
  grades[0][3] = 89;
  grades[0][4] = 90;

  grades[1][0] = 85;
  grades[1][1] = 80;
  grades[1][2] = 80;
  grades[1][3] = 82;
  grades[1][4] = 87;
  //for loop iterates through the rows and columns of the 2D array(grades)
  //2 = the outer loop, 5 = inner loop
  for (i = 0; i < 2; i++) {
    min = grades[i][0];
    max = grades[i][0];
    // for loop declears the min and max of the the the grades
    //in each subject
    for (j = 1; j < 5; j++) {
      if (grades[i][j] < min) {
        min = grades[i][j];
      }
      if (grades[i][j] > max) {
        max = grades[i][j];
      }
    }
    //print statement for each min and max of the subjects 
    printf("The minimum grade in subject %d is: %.2f\n", i, min);
    printf("The maximum grade in subject %d is: %.2f\n", i, max);
  }

  return 0;
}

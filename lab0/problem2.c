//Author: Donovan Givens
// This is a Function that computes the perimeter and area of a 
// 5x3 rectangle using a variable series 

#include <stdio.h>

//func takes variables and puts them in perimeter/area formula 
//to form output
int main() {
    int height = 5;
    int width = 3;
    int perimeter = 2 * (height + width);
    int area = height * width;

    //print statement that prints the asnwer of the area and perimeter
    printf("Perimeter of the rectangle = %d inches\n", perimeter);
    printf("Area of the rectangle = %d square inches\n", area);

    return 0;
}

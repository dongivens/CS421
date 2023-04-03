//By Donovan Givens
//Structures
#include <stdio.h>

/* define the point struct */
struct point {
    int x;
    int y;
};

/* function to draw a point */
void draw(int x, int y) {
    printf("Drawing point at (%d, %d)\n", x, y);
}

int main() {
    /* draw a point without structs */
    int x = 10;
    int y = 5;
    draw(x, y);

    return 0;
}

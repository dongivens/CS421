//By: Donovan Givens
//Structures 

#include <stdio.h>

/* define the point struct */
struct point {
    int x;
    int y;
};

/* function to draw a point */
void draw(struct point p) {
    printf("Drawing point at (%d, %d)\n", p.x, p.y);
}

int main() {
    /* create a point using a struct */
    struct point p;
    p.x = 10;
    p.y = 5;

    /* draw the point */
    draw(p);

    return 0;
}

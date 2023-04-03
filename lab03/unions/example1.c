//Donovan Givens
//Unions 'operator' example

#include <stdio.h>

struct operator {
    int type;
    union {
        int intNum;
        float floatNum;
        double doubleNum;
    } types;
};

int main() {
    struct operator op;
    op.type = 0;
    op.types.intNum = 352;
    //printf("Type: %d\nInt Num: %d\n", op.type, op.types.intNum);
    return 0;
}




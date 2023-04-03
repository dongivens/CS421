//By Donovan Givens
//union 'Coins' example

/*
To always have multiple variables of the same type, 
and you want to be able to use both names 
(for readability) and indexes 
(for ease of iteration), in that case you can 
do something like this:
*/
#include <stdio.h>

union Coins {
    struct {
        int quarter;
        int dime;
        int nickel;
        int penny;
    };
    int coins[4];
};

int main() {
    union Coins change;
    for(int i = 0; i < sizeof(change.coins) / sizeof(int); ++i) {
        printf("Enter number of %s: ", (i == 0) ? "quarters" : (i == 1) ? "dimes" : (i == 2) ? "nickels" : "pennies");
        if (scanf("%i", change.coins + i) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }
    printf("There are %i quarters, %i dimes, %i nickels, and %i pennies.\n",
        change.quarter, change.dime, change.nickel, change.penny);
    return 0;
}

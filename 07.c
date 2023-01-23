// A number is positive or negative
// A number is positive or negative by checking its value against 0. 
//A number greater than 0 is considered positive, and a number less than 0 is considered negative.
#include <stdio.h>

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}

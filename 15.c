// The spelling of the numbers 0 to 3 in English

#include <stdio.h>

int main() {
    int i;
    for (i = 0; i <= 3; i++) {
        switch(i) {
            case 0:
                printf("zero\n");
                break;
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            default:
                printf("Invalid number\n");
                break;
        }
    }
    return 0;
}

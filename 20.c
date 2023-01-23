//1+3+5+........................+m display the serise  and calculate in c.

#include <stdio.h>

int main() {
    int m, i, sum=0;
    printf("Enter a number: ");
    scanf("%d", &m);
    for (i = 1; i <= m; i= i+2) {
        printf("%d + ", i);
        sum += i;
    }
    printf("\b\b = %d\n", sum);
    return 0;
}
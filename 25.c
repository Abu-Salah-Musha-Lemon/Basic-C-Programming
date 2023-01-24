
// 1^2*2^2*3^2*........................*m^2 display the series  and calculate sum.

#include <stdio.h>
#include <math.h>

int main() {
    int m, i;
    double product=1;
    printf("Enter a number: ");
    scanf("%d", &m);
    for (i = 1; i <= m; i++) {
        printf("%d^2*", i);
        product *= pow(i,2);
    }
    printf("\b = %lf\n", product);
    return 0;
}
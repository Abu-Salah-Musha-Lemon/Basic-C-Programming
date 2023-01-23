
// 2^2+2^3+2^4+2^5........................+m^n display the serise  and calculate in c 

#include <stdio.h>
#include <math.h>

int main() {
    int m, i;
    double sum=0;
    printf("Enter a number: ");
    scanf("%d", &m);
    for (i = 2; i <= m; i++) {
        printf("%d^%d + ", m,i);
        sum += pow(2,i);
    }
    printf("\b\b = %lf\n", sum);
    return 0;
    
}

//2^2*2^3*2^4*........................*m^n display the series  and calculate

#include <stdio.h>
#include <math.h>

int main() {
    int m,n;
    double product=1;
    printf("Enter the value of power range (n): ");
    scanf("%d", &m);
    printf("Enter the value of base(n): ");
    scanf("%d", &n);
    for (int i = 2; i <= m; i++) {
        printf("%d^%d*", n,i);
        product *= pow(n,i);
    }
    printf("\b = %lf\n", product);
    return 0;
}
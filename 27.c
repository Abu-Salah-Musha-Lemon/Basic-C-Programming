
// (1*2)+(2*3)+(3*4)........................+(m*n) display the series  and calculate sum.



#include <stdio.h>

int main() {
    int m,n;
    int sum =0;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= m; i++) {
        printf("(%d*%d) + ", i,i+1);
        sum += (i*(i+1));
    }
    printf("\b\b = %d\n", sum);
    return 0;
}
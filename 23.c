
// 1^2+2^2+3^2+........................+m^2 display the serise  and calculate in c 

#include <stdio.h>

int main() {
    int m, i, sum=0;
    printf("Enter a number: ");
    scanf("%d", &m);
    for (i = 1; i <= m; i++) {
        printf("%d^2 + ", i);
        sum += i*i;
        //sum+=pow(i,2);
    }
    printf("\b\b = %d\n", sum);
    return 0;
}
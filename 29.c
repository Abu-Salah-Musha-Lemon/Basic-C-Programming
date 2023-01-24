
// 1+(1/2)+(1/3)+............................ +(1/n) display the series and calculate the sum

#include <stdio.h>

int main() {
    int n;
    double sum=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The series is :");
    for (int i = 2; i <= n; i++) {
        printf("1/%d + ", i);
        sum += (1.0/i);
    }
    printf("\nSum :\b\b = %lf\n", sum);
    return 0;
}

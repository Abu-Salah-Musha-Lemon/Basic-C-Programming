
// 1*2*3*........................*m display the serise  and calculate in c

#include <stdio.h>

int main() {
    int m, i;
    int product=1;
    printf("Enter a number: ");
    scanf("%d", &m);
    for (i = 1; i <= m; i++) {
        printf("%d*", i);
        product *= i;
    }
    printf("\b = %d\n", product);
    return 0;
}


//(1+2)*(2+3)*(3*4)........................*m display the series  and calculate sum
// (1+2)*(2+3)*(3*4)........................*(m+n) display the series  and calculate sum

#include <stdio.h>

int main() {
    int m;
    int product=1;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("The series :");
    for (int i = 1; i <= m; i++) {
        printf("(%d+%d)*", i,i+1);
        product *= (i+(i+1));
    }
    printf(" summ \b\b = %d\n",  product);
    return 0;
}
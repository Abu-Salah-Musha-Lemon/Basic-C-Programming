//Uses a for loop to print "Ict" a certain number of times:

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of times you want to print 'Ict': ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Ict\n");
    }
    return 0;
}

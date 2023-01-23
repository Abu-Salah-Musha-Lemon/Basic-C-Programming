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


//Uses a while loop to print "Ict" a certain number of times:

int main() {
    int n, i=1;
    printf("Enter the number of times you want to print 'Ict': ");
    scanf("%d", &n);
    while(i<=n){
        printf("Ict\n");
        i++;
    }
    return 0;
}

//Uses a do while loop to print "Ict" a certain number of times:

#include <stdio.h>

int main() {
    int n, i=1;
    printf("Enter the number of times you want to print 'Ict': ");
    scanf("%d", &n);
    do{
        printf("Ict\n");
        i++;
    }while(i<=n);

    return 0;
}


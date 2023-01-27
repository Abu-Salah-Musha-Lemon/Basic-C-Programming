#include <stdio.h>

int main() {
    // Write C code here
    printf("Half Pyramid\n");
    int row=4;// -----------------
    for(int i=1;i<=row; i++){
        for(int j =1 ;j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
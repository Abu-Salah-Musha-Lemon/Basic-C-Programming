#include <stdio.h>

int main() {
    // Write C code here
    printf("Inverted Half Pyramid\n");
    int row=4;// -----------------
    for(int i=row;i>=1; i--){
        for(int j =1 ;j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

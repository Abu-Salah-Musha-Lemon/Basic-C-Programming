//Calculates the commission on a given selling amount based on the condition given
// if selling <5000 give 15% , if selling >=5000 give 25% 
#include <stdio.h>

int main() {
    float selling, commission;
    printf("Enter the selling amount: ");
    scanf("%f", &selling);
    if (selling < 5000) {
        commission = selling * 0.15;// 15% = 0.15
    } else {
        commission = selling * 0.25; // 25% = 0.25
    }
    printf("The commission on %.2f is %.2f\n", selling, commission);
    return 0;
}

#include <stdio.h>

int main() {
    float a, b, c, half_range;
    printf("Enter the length of side 1: ");
    scanf("%f", &a);
    printf("Enter the length of side 2: ");
    scanf("%f", &b);
    printf("Enter the length of side 3: ");
    scanf("%f", &c);
    half_range = (2 * (sqrt((2*a*a + 2*b*b - c*c)/3)))/3;
    printf("The half range of the triangle is: %f\n", half_range);
    return 0;
}

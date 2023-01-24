

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, root1, root2;
    printf("Enter the coefficients a, b, and c (ax^2+bx+c) of the quadratic function: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots of the quadratic function are: %lf and %lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("The root of the quadratic function is: %lf\n", root1);
    } else {
        printf("The quadratic function has no real roots.\n");
    }
    return 0;
}


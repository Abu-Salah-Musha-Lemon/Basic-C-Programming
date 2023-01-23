#include<stido.h>
#include<conio.h>
#def int pi = 3.1416;
void main{
    float r, a;
    printf("Enter the radious of the circle:");
    scanf("%f",&r);
    a = pi* r*r;
    printf("The area is %f", a);
    return 0;
}

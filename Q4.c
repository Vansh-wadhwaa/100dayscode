//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
    float r, a, c, p;
    printf("Enter radius of the circle");
    scanf("%f", &r);
    p=3.14;
    a=p*r*r;
    c=2*p*r;
    printf("Area of the Circle is %f\n", a);
    printf("Circumference of the Circle is %f\n", c);
    return 0;
}
//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float f;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter b");
    scanf("%d", &b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("Sum is %d\n",c);
    printf("Difference is %d\n",d);
    printf("Product is %d\n",e);
    printf("Quotient is %f\n",f);
    return 0;
}
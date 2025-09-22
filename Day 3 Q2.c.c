//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("Now the First Number is: %d\n", a);
    printf("And Second Number is: %d\n", b);
    return 0;
}
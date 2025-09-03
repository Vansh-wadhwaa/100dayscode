//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main(){
    int a,b,area, perimeter;
    printf("Enter Length of the Rectangle:");
    scanf("%d", &a);
    printf("Enter Breadth of the Rectangle");
    scanf("%d", &b);
    area=a*b;
    perimeter=2*(a+b);
    printf("Area of the Rectangle is %d\n", area);
    printf("Perimeter of the Rectangle is %d\n", perimeter);
    return 0;
}
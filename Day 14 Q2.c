//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i;
    long long product = 1;
    int has_even = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) { 
        product *= i;
        has_even = 1; 
    }

    if (has_even) {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    } else {
        printf("There are no even numbers from 1 to %d.\n", n);
    }

    return 0;
}
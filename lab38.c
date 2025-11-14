#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = n * n;  // Formula: sum of first n odd numbers = n^2
    printf("Sum of 1st %d odd numbers = %d\n", n, sum);
    return 0;
}

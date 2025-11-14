#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = n * (n + 1);  // Formula: sum of first n even numbers = n*(n+1)
    printf("Sum of 1st %d even numbers = %d\n", n, sum);
    return 0;
}

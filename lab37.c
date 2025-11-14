#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;  // Formula for sum of first n natural numbers
    printf("Sum of 1st %d natural numbers = %d\n", n, sum);
    return 0;
}

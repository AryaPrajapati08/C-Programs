#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0;
    printf("Enter number of values (n): ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", sum / n);
    return 0;
}

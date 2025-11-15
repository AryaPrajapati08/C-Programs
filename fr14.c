#include <stdio.h>

float getSumN(int count, int n) {
    float x;
    if(count == n)
        return 0;
    printf("Enter value %d: ", count + 1);
    scanf("%f", &x);
    return x + getSumN(count + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    float sum = getSumN(0, n);

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", sum / n);

    return 0;
}

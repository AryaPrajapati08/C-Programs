#include <stdio.h>

int main() {
    float num, sum = 0;
    int i;
    for(i = 1; i <= 10; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", sum / 10);
    return 0;
}

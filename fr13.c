#include <stdio.h>

float getSum10(int count) {
    float x;
    if(count == 10)
        return 0;
    printf("Enter value %d: ", count + 1);
    scanf("%f", &x);
    return x + getSum10(count + 1);
}

int main() {
    float sum = getSum10(0);
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", sum / 10);
    return 0;
}

#include <stdio.h>

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Digits of %d: ", num);
    while(num > 0) {
        n = num % 10;
        printf("%d ", n);
        num /= 10;
    }
    printf("\n");
    return 0;
}

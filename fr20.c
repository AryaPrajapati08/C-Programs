#include <stdio.h>

void printDigits(int n) {
    if(n == 0)
        return;
    printf("%d ", n % 10);
    printDigits(n / 10);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printDigits(num);
    return 0;
}

#include <stdio.h>

void printOddN(int i, int n) {
    if(i > n)
        return;
    printf("%d ", 2*i - 1);
    printOddN(i + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("1st %d odd numbers: ", n);
    printOddN(1, n);
    printf("\n");
    return 0;
}

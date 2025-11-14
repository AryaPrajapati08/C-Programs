#include <stdio.h>

void printEvenN(int i, int n) {
    if(i > n)
        return;
    printf("%d ", 2*i);
    printEvenN(i + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("1st %d even numbers: ", n);
    printEvenN(1, n);
    printf("\n");
    return 0;
}

#include <stdio.h>

void printOdd(int n) {
    if(n > 19)  // last odd number <= 20
        return;
    printf("%d ", n);
    printOdd(n + 2);
}

int main() {
    printf("1st 10 odd numbers: ");
    printOdd(1);
    printf("\n");
    return 0;
}

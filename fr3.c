#include <stdio.h>

void printEven(int n) {
    if(n > 20)
        return;
    printf("%d ", n);
    printEven(n + 2);
}

int main() {
    printf("1st 10 even numbers: ");
    printEven(2);
    printf("\n");
    return 0;
}

#include <stdio.h>

void printNatural(int n) {
    if(n > 10)
        return;
    printf("%d ", n);
    printNatural(n + 1);
}

int main() {
    printf("1st 10 natural numbers: ");
    printNatural(1);
    printf("\n");
    return 0;
}

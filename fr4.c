#include <stdio.h>

void printNaturalN(int i, int n) {
    if(i > n)
        return;
    printf("%d ", i);
    printNaturalN(i + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("1st %d natural numbers: ", n);
    printNaturalN(1, n);
    printf("\n");
    return 0;
}

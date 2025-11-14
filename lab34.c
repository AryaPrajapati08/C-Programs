#include <stdio.h>

int main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("1st %d natural numbers: ", n);
    for(i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("1st %d odd numbers: ", n);
    for(i = 1; i <= 2*n; i += 2)
        printf("%d ", i);
    printf("\n");
    return 0;
}

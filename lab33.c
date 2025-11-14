#include <stdio.h>

int main() {
    int i;
    printf("1st 10 even numbers: ");
    for(i = 2; i <= 20; i += 2)
        printf("%d ", i);
    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int a[10], i;
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("4th = %d\n", a[3]);
    printf("7th = %d\n", a[6]);
    printf("9th = %d\n", a[8]);
    
    return 0;
}

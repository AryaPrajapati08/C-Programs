#include <stdio.h>

void findLS(int count, int limit, int *largest, int *smallest) {
    int x;
    if(count == limit)
        return;

    printf("Enter number %d: ", count + 1);
    scanf("%d", &x);

    if(x > *largest) *largest = x;
    if(x < *smallest) *smallest = x;

    findLS(count + 1, limit, largest, smallest);
}

int main() {
    int largest = -999999, smallest = 999999;
    findLS(0, 100, &largest, &smallest);
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    return 0;
}

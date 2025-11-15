#include <stdio.h>

int main() {
    int a[4][4], b[16], i, j, k = 0, temp;

    // Input matrix
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);

    // Convert to 1D
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            b[k++] = a[i][j];

    // Bubble sort
    for(i=0;i<16;i++)
        for(j=i+1;j<16;j++)
            if(b[i] > b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }

    printf("Sorted 1D Array:\n");
    for(i=0;i<16;i++)
        printf("%d ", b[i]);

    return 0;
}

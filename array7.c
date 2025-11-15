#include <stdio.h>

int main() {
    int a[4][4], i, j;

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);

    printf("Transpose:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}

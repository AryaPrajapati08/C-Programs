#include <stdio.h>

int main() {
    int a[3][3], b[3][3], add[3][3], sub[3][3], mul[3][3];
    int i, j, k;

    printf("Enter 1st 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("Enter 2nd 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);

    // Addition
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            add[i][j] = a[i][j] + b[i][j];

    // Subtraction
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            sub[i][j] = a[i][j] - b[i][j];

    // Multiplication
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            mul[i][j] = 0;
            for(k=0;k<3;k++)
                mul[i][j] += a[i][k] * b[k][j];
        }

    printf("\nAddition:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ", add[i][j]);
        printf("\n");
    }

    printf("\nSubtraction:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ", sub[i][j]);
        printf("\n");
    }

    printf("\nMultiplication:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }

    return 0;
}

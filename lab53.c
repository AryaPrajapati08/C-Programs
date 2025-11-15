#include <stdio.h>

int main() {
    int a[3][3], *p;
    int i, j, largest, smallest;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d", &a[i][j]);

    p = &a[0][0];
    largest = smallest = *p;

    for(i=0;i<9;i++){
        if(*(p+i) > largest) largest = *(p+i);
        if(*(p+i) < smallest) smallest = *(p+i);
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}

#include <stdio.h>

int main() {
    int a[5], i, j, t, choice;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("1 = Ascending, 2 = Descending: ");
    scanf("%d",&choice);

    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if((choice==1 && a[i]>a[j]) || (choice==2 && a[i]<a[j])) {
                t=a[i]; a[i]=a[j]; a[j]=t;
            }

    for(i=0;i<5;i++)
        printf("%d ", a[i]);

    return 0;
}

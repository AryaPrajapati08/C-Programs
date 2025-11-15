#include <stdio.h>

int main() {
    int a[10], temp[10]={0}, n, i, dir;

    for(i=0;i<10;i++) scanf("%d",&a[i]);

    printf("Enter shift positions: ");
    scanf("%d",&n);

    printf("1 = Left shift, 2 = Right shift: ");
    scanf("%d",&dir);

    if(dir==1)
        for(i=0;i<10;i++)
            if(i+n < 10) temp[i]=a[i+n];
    else
        for(i=9;i>=0;i--)
            if(i-n >= 0) temp[i]=a[i-n];

    for(i=0;i<10;i++)
        printf("%d ", temp[i]);

    return 0;
}

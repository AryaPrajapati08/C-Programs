#include <stdio.h>

int main() {
    int a[10], i, j, count;

    for(i=0;i<10;i++) scanf("%d",&a[i]);

    for(i=0;i<10;i++){
        count=1;
        if(a[i]==-1) continue;

        for(j=i+1;j<10;j++)
            if(a[i]==a[j]) {
                count++;
                a[j]=-1;
            }

        printf("%d appears %d times\n", a[i], count);
    }
}

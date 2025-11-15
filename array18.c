#include <stdio.h>

int main() {
    int a[10], i, key, flag=0;
    
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    scanf("%d",&key);

    for(i=0;i<10;i++)
        if(a[i]==key){
            printf("Found at position %d\n", i+1);
            flag=1;
            break;
        }

    if(!flag)
        printf("Not found\n");

    return 0;
}

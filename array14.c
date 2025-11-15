#include <stdio.h>

int main() {
    int a[20], n, val, i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    scanf("%d",&val);
    a[n] = val;

    for(i=0;i<=n;i++) printf("%d ", a[i]);
}

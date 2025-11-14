#include <stdio.h>
int main()
{
    int i, n;
    int a = 1, b = 1, next;
    printf("Enter the terms:");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Enter positive value.");
    }
    printf("fibonaci series:");
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == 2)
        {
            printf("1");
        }
        else
        {
            next = a + b;
            printf("%d", next);
            a = b;
            b = next;
        }
        printf(" ");
    }

    return 0;
}

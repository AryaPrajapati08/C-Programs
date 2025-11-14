#include <stdio.h>

void main()
{
    double kb,mb,gb;
    printf("Enter the value of kb :");
    scanf(" %lf ",&kb);

    mb = kb / 1024;
    gb = kb / (1024 * 1024);

    printf("%.2lf kb = %.2lf mb",kb,mb);
    printf("%.2lf kb = %.4lf gb",kb,gb);
}

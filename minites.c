#include<stdio.h>

int main()
{
    int hours,minitus;

    printf("Enter minitus :");
    scanf("%d ",&minitus);

    hours=minitus/60;

    printf("%d minitus = %d hours\n",minitus,hours);
    
    return 0;

}
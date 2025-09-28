#include<stdio.h>

int main()
{
    int hours,minitus;

    printf("Enter hours :");
    scanf("%d ",&hours);

    minitus=hours*60;

    printf("%d hours = %d minitus\n",hours,minitus);
    
    return 0;

}
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    printf("values before swap %d and %d",a,b);
    c=a;
    a=b;
    b=c;
     printf("values after swap %d and %d",a,b);

}
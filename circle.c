#include <stdio.h>

void main()
{
    float r,a,p;

    printf("Enter he value of radius :");
    scanf("%f",&r);

    a = (22 * r * r) / 7;

    p = (2 * 22 * r) / 7;

    printf("Area of the circle is : %f \n",a);

    printf("parameter of the circle is : %f",p);
}
#include <stdio.h>

void main()
{
    float l,w,a,p;

    printf("Enter the value of length of rectangle :");
    scanf("%f",&l);

    printf("Enter the value of width of rectangle :");
    scanf("%f",&w);

    a = l * w;

    p = 2 * (l+w);

    printf("Area of the squre is : %f \n", a);

    printf("Parameter of the squre is : %f", p);

}
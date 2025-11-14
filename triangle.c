#include<stdio.h>

void main()
{
    float h,a,l;

    printf("Enter the value of hieght of triangle :");
    scanf("%f",&h);

    printf("Enter the value of side length of triangle :");
    scanf("%f",&l);

    a = (h * l)/2;

    printf("Area of the triangle is : %f",a);

}
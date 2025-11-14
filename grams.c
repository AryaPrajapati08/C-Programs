#include<stdio.h>
int main()
{
    float grams,kg;

    printf("Enter the amount of grams :");
    scanf("%f",&grams);

    kg = grams / 1000 ;

    printf("Your calculated kilograms:%f",kg);
    return 0;
}
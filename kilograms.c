#include<stdio.h>
int main()
{
    float grams,kg;

    printf("Enter the amount of kilograms :");
    scanf("%f",&kg);

    grams = kg * 1000 ;

    printf("Your calculated grams:%f",grams);
    return 0;
}
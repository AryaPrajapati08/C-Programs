#include <stdio.h>

void main()
{
    float P,R,N,I;

    printf("Enter your principle value :");
    scanf("%f",&P);

    printf("Enter your rate of intrest :");
    scanf("%f",&R);

    printf("Enter your time period :");
    scanf("%f",&N);

    I=(P * R * N) / 100;

    printf("Simple Intrest = %.2f", I);
}


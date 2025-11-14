#include <stdio.h>
int main()
{
    float rupees,dollars;

    printf("Enter amount in dollars:");
    scanf("%f", &dollars);

    rupees = dollars * 48 ;

    printf("Amount in rupees : %2f", rupees);
    return 0;
}
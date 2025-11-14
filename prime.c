#include <stdio.h>

int main()
{
    int i,n,temp=0;

    printf("Enter your number :");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        if (n % i==0)
        {
            temp++;
        }
        
    }
    if (temp == 2)
    {
        printf("Your number is prime number.");

    }
    else{
        printf("your number is not a prime number.");
    }
    
    
    return 0;
}

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);

        for (int i = 1; i <= n/2; i++)
        {
            if (n % i == 0)   
            {
               sum+= i; 
            }
            
        }
        if (sum == n)
        {
            printf("Your number is perfact.");
        }
        else{
            printf("your number is not perfact.");
        }
        
    return 0;
}

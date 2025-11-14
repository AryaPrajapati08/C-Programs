#include<stdio.h>

int main()
{
    int r,n,sum=0;

    printf("Enter your number :");
    scanf("%d",&n);
    
    int temp=n;
    while (n>0)
    {
        r=n%10;
        sum+=(r*r*r);
        n=n/10;

    }

    if(sum==temp){
        printf("your number  is the amstrong number.");
    }
    else{
        printf("your number is not rmstong number.");
    }
    
    return 0;
}

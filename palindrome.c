#include <stdio.h>

int main()
{
    int i=0,n,r,a;

    printf("Enter your number :");
    scanf("%d",&n);

    a = n;
    while (n>0)
    {
        r=n%10;
        i = (i*10) + r;
        n=n/10;
    }
    if (a==i)
    {
        printf("Your number is palindrome.");
    }
    else{
        printf("Your number is not palindrom.");
    }
    
    
    return 0;
}

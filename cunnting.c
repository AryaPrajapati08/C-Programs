#include<stdio.h>

int main()
{
    int i=0,n;
    printf("Enter the number :");
    scanf("%d",&n);

    if (n == 0)
    {
        i = 1;
    }
    
    else{
        if (n<0)
        {
            n=-n;
        }
        while (n>0)
        {
            n=n/10;
            i++;
        }
    }
    printf("Number of elements in  given number is: %d",i);
    return 0;
}

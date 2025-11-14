#include<stdio.h>
int main()
{
    int n,temp=0,r;
    printf("enter your number :");
    scanf("%d",&n);
    
    while (n>0)
     {
        r=n%10;
    temp=(temp*10)+r;
    n=n/10;
     }
     
    

    printf("reverse number is %d",temp);
    return 0;
}

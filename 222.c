#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i ,n=0;
    for (int  i = 1; i < 100; i++)
    {
        if (i%3==0)
        {
            n += i;
        }
    }
        printf("Here is the value of sum of values is divisible by 3 is : %d ",n);
        
    
    
    return 0;
}

#include<stdio.h>

int main()
{
    int j,i;
    for (int i = 1; i < 500; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            break;
        }
            if (i==j)
            {
                printf("%d",i);
            }
            
            
        
        

    }
    
    return 0;
}


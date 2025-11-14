#include<stdio.h>

int main()
{
    int values[10];
    int sum=0;
    float mean;
    
    printf("enter the 10 numbers :\n");
    

    for (int  i = 0; i < 10; i++)
    {
        printf("values %d :",i + 1);
        scanf("%d \n",&values[i]);
        sum+=values[i];
    }
    mean = (float)sum /10;

    printf("\n Sum of 10 values are %d .",sum);
    printf("mean of 10 values are %f .",mean);
    
    
    return 0;
}

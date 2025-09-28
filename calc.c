#include<stdio.h>

int main()
{
    int num1,num2,sum,product,substract;
    float division;

    printf("Enter your two values:");
    scanf("%d %d",&num1,&num2);

    

    sum=num1+num2;
    substract=num1-num2;
    product=num1*num2;
    division=(float)num1/num2;
  
    
    printf("sum : %d + %d = %d \n",num1,num2,sum);
    printf("difference: %d - %d = %d \n",num1,num2,substract);
    printf("multiplication : %d * %d = %d \n",num1,num2,product);
    printf("divison : %d / %d = %d \n",num1,num2,division);

return 0;    

}





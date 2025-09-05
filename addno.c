#include<stdio.h>

  int main()
  {
    int num1,num2,sum;

    printf("Enter your first value:");
    scanf("%d",&num1);

    printf("Enter your second value:");
    scanf("%d",&num2);

    sum=num1+num2;

    printf("sum of %d and %d is = %d ",num1,num2,sum);

    return 0;
  }
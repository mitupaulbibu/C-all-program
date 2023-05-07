#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
    printf("%d is: Maximum",num1);
    }
    else if(num1<num2)
    {
    printf("%d is: Maximum",num2);
    }
    else(num1==num2);
    printf("Both number equal");
    return 0;
    }

#include<stdio.h>

int main()
{
    int num;
    printf("Enter any number");
    scanf("%d", &num);
    if(num%3==0 && num%5==0)
    {
    printf("number is divisible by 3 and 5");
    }
    else
    {
    printf("number is not divisible by 3 and 5");
    }
    return 0;
}


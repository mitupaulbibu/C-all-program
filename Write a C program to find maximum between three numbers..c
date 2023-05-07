#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("\n Enter three integer number");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1>num2 && num2>num3)
    {
        printf("\n %d The maximum number",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("\n %d The maximum number", num2);
    }
    else
    {
        printf("\n %d The maximum number", num3);
    }
    return 0;
}

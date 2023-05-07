#include<stdio.h>

int main()
{
    int n, num1, num2, i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n)
    {
    printf("Enter two number");
    scanf("%d%d", &num1, &num2);
    if(num1>num2)
    printf("%d is the largest number", num1);
    else
    printf("%d is the largest number", num2);
    i++;
    }
    return 0;
}

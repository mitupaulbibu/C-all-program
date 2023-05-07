#include<stdio.h>

long factorial(long n)
{
    long i, fact=1;
    for(i=1; i<=n; i++)
    {
    fact *= i;
    }
    return fact;
}
int main()
{
    long n, result;
    printf("Enter a number: ");
    scanf("%ld", &n);
    result = factorial(n);
    printf("factorial of %ld is %ld", n, result);
    return 0;
}

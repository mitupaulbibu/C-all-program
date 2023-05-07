#include<stdio.h>

int main()
{
    int a, n;
    printf("Enter an integer number:");
    scanf("%d",&n);
    for(a=1; a<=n; a++)
    {
    if(a%2==1)
    printf("\n%d all even number", a);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int a,b,temp , gcd;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }

    gcd=a;
    printf("\ngcd %d",gcd);
    return 0;
}

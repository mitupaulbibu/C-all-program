#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("\n Enter three integer number");
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a>c)
    {
        printf("\n %d is the largest number",a);
    }
    else if(b>a && b>c)
    {
        printf("\n %d is the largest number",b);
    }
    else
    {
        printf("\n %d is the largest number",c);
    }
    return 0;
}

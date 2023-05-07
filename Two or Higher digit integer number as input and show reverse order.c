#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a integer number: ");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    a=b%10/c;
    printf("\n The reverse number is: %d%d\n", b,c);
    return 0;
}

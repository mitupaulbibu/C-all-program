#include<stdio.h>
int main()
{
    printf("Messege");
    char a, r, g, b;
    printf("\n character: ");
    scanf("%c", &a);
    if(a=='r')
    {
    printf("\n Red");
    }
    else if(a=='g')
    {
    printf("\n Green");
    }
    else if(a=='b')
    {
    printf("\n Blue");
    }
    else
    {
        printf("\n Not Matched");
    }
    return 0;
    }

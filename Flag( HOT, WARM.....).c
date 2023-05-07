#include<stdio.h>
int main()
{
    printf("Message");
    int flag, a=1, b=2, c=3;
    printf("\n Enter any integer: ");
    scanf("%d", &flag);
    if(flag==1)
    {
        printf("\n HOT");
    }
    else if(flag==2)
    {
        printf("\n WARM");
    }
    else if(flag==3)
    {
        printf("\n COLD");
    }
    else
    {
        printf("\n Out of Range");
    }
    return 0;
}


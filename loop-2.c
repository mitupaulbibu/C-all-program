#include<stdio.h>

int main()
{
    int i, k;
    for(i=1; i<=5; i++)
    {
        for(k=1; k<=5; k++)
        {
            if(i==k)
                printf("*");
                printf("#");
        }
        printf("\n");
    }
    return 0;
}

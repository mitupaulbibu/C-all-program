#include<stdio.h>

int main()
{
    int i, k;
    for(i=1; i<5; i++)
    {
        for(k=1; k<10; k++)
        {
            if(i==k)
            break;
        printf("i=%d, k=%d", i, k);
        }
    printf("\n");
    }
    return 0;
}

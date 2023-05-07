#include<stdio.h>

int main()
{
    int i, k=10;
    for(i=1; i<=10; i++)
    {
        if (i==k)
            continue;
        printf("i=%d, k=%d", i,k);
        k--;
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int c, r, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n-r; c++)
            printf(" ");
        for(c=1; c<=r; c++)
            printf("%d ", r);

        printf("\n");
    }

    return 0;
}

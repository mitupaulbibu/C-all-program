#include<stdio.h>

int main()
{
    int r, c, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(r=1; r<=n; r++)
        {
            for(c=1; c<=r; c++)
                {
                printf(" %d ", c*r);
                }
        printf("\n");
        }
    return 0;
}

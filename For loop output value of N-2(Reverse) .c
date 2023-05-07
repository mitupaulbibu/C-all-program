#include<stdio.h>

int main(){
    int r, c, n;
    printf("Enter N:");
    scanf("%d", &n);
    for(r=n; r>=1; r--)
        {
            for(c=1; c<=r; c++)
            {
            printf("*",r);
            }
        printf("\n");
        }

    return 0;
    }

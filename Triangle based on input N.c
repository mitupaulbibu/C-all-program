#include<stdio.h>

int main(){
    int r, c, n;
    printf("Enter N:");
    scanf("%d", &n);
    for(r=1; r<=n; ++r)
        {
            for(c=1; c<=n; ++c)
            {
                printf("%d",r);
            }
            printf("\n");
        }
    return 0;
    }


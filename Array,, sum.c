#include<stdio.h>

int main()
{
    int a[100] [100], row, col, r, c, sum;
    printf("Enter row and column number:");
    scanf("%d%d",&row,&col);

    for(r=0; r<row; r++) {
        for(c=0; c<col; c++){
            scanf("%d ", &a[r][c]);
        }
    }

    printf("Enter Matrix:\n ");
   for(r=0; r<row; r++) {
        sum=0;
        for(c=0; c<col; c++) {
            printf("%d ",a[r][c]);
            sum+=a[r][c];
        }
        printf("sum=%d\n ", sum);

    }
    return 0;
    }

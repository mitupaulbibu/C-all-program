#include<stdio.h>

int main()
{
    int v1=0, v2=1, v3, n, temp;
    printf("Enter any number : ");
    scanf("%d", &n);

        for(v3=0; v3<=n; v3++)
        {

            printf("%d ", v1);
            temp=v1+v2;
            v1=v2;
            v2=temp;
        }
    return 0;
}

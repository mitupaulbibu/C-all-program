#include<stdio.h>

int main()
{
    int num, i, arr[100];
    printf("Enter any decimal number: ");
    scanf("%d", &num );
    while(num !=0)
    {
        arr[i]=num%2;
        num= num/2;
    i++;
    }
    printf("\nThe Binary number: ");

    for(i=i-1; i>=0;i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

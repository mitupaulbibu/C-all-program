#include<stdio.h>

int main()
{
    int arr[100],i, n, sum=0;
    printf("Enter the value: ");
    scanf("%d", &n);

    printf("Enter the number:\n ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<n; i++)
    {
        if(arr[i]%2==1)
            sum=sum+arr[i];
    }
    printf("Sum of all odd values is : %d ", sum );
    return 0;
}

#include<stdio.h>

int main()
{
    int arr[100], i, j, a, n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the number: \n ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("\n The number in ascending order: %d ", arr[i]);
    }
    return 0;

}

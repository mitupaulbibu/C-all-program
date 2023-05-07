#include<stdio.h>

void arraytest(int a[])
{
    // changed the array a
    a[0]=a[0]+a[1];
    a[1]=a[0]-a[1];
    a[0]=a[0]-a[1];

}

int main()
{
    int arr[]={1,2};
    printf("%d  %d",arr[0],arr[1]);
    arraytest(arr);
    printf("\n After calling fun arr contains: %d\t %d",arr[0],arr[1]);

    return 0;
}

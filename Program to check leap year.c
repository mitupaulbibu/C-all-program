#include<stdio.h>

int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0)
    {
    printf("Leap Year");
    }
    else
    {
    printf("common year");
    }
    return 0;
}

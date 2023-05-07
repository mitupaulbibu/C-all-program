#include<stdio.h>

int main()
{
    int year;
    printf("Enter any year(1-12)");
    scanf("%d", &year);
    if(year==1)
    {
    printf("31 days");
    }
    else if(year==2)
    {
    printf("28 or 29 days");
    }
    else if(year==3)
    {
    printf("31 days");
    }
    else if(year==4)
    {
    printf("30 days");
    }
    else if(year==5)
    {
    printf("31 days");
    }
    else if(year==6)
    {
    printf("30 days");
    }
    else if(year==7)
    {
    printf("31 days");
    }
    else if(year==8)
    {
    printf("31 days");
    }
    else if(year==9)
    {
    printf("30 days");
    }
    else if(year==10)
    {
    printf("31 days");
    }
    else if(year==11)
    {
    printf("30 days");
    }
    else if(year==12)
    {
    printf("31 days");
    }
    else
    {
    printf("Invalid input! please enter year number between112 ");
    }
    return 0;
}

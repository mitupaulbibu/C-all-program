#include<stdio.h>

int main()
{
    int week;
    printf("Enter any Week (1-7)");
    scanf("%d", &week);

    if(week%7+1==1)
    {
        printf("Friday");
    }
    else if(week%7+1==2)
    {
        printf("Saturday");
    }
     else if(week%7+1==3)
    {
        printf("Sunday");
    }
     else if(week%7+1==4)
    {
        printf("Monday");
    }
     else if(week%7+1==5)
    {
        printf("Tuesday");
    }
     else if(week%7+1==6)
    {
        printf("Wednesday");
    }
     else if(week%7+1==7)
    {
        printf("Thursday");
    }
    else
    {
        printf("Invalid input! ");
    }
    return 0;
}

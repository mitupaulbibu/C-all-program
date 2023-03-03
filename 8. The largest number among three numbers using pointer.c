#include<stdio.h>

int main()
{
    int num1, num2, num3;
    int *p1, *p2, *p3;
    printf("\n Enter three integer number");
    scanf("%d %d %d", &num1,&num2,&num3);

    p1=&num1;
    p2=&num2;
    p3=&num3;
    if (*p1>*p2 && *p1>*p3)
    {
        printf("\n %d is the largest number",*p1);
    }
    else if(*p2>*p1 && *p2>*p3)
    {
        printf("\n %d is the largest number",*p2);
    }
    else
    {
        printf("\n %d is the largest number",*p3);
    }
    return 0;
}

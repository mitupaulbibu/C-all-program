#include<stdio.h>

int main()
{
    int x=3;
    int z=6;
    int y= x++ + ++x;
    printf("%d",y);
    if(++x + x++)
        {
        printf("%d");
        }
    else if(y=x>z? x:z)
    {
        printf("%d");
    }
    return 0;
}

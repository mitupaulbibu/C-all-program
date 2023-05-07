#include<stdio.h>

int main()
{
    int x=3;
    int z=6;
    int y= x++ + ++x;
    printf("\n %d",y);
    y= ++x + x++;
    printf("\n %d",y);
    y=x>z? x:z;
    printf("\n %d",y);
    return 0;
}

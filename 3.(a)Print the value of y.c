#include<stdio.h>

int main()
{
    int x;
    int z;
    int y;
    x=3;
    z=6;
    y=x++ + ++x;
    printf("%d", y);
    return 0;
}

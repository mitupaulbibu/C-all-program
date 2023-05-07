#include<stdio.h>

int main()
{
    int x;
    int y;
    int z;
    x=3;
    z=6;
    y=++x + ++z;
    printf("%d", y);
    return 0;
}

#include<stdio.h>

int main () {
    int a = 5;
    while( a < 100 )
    {
    printf("value of a:%d\n", a);
    a+=2;
    if(a > 20)
    break;
    }
    return 0;
}

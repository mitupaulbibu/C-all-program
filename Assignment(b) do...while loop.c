#include<stdio.h>

int main()
{
    int i=0, x=0;
   do
    {
        if(i%5 == 0){
            x++;
            printf("%d", x);
        }
        ++i;
    }while(i<20);
    printf("\nx = %d", x);

    return 0;
}


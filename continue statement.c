#include<stdio.h>

int main()
{
   int i=1;
   while(i<=10)
    {
        printf("Before continue:%d\n", i);
        i++;
        continue;
        printf("After continue:%d\n", i);
        i++;
    }

    printf("The End");

    return 0;
}


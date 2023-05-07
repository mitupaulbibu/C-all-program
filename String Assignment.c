#include<stdio.h>
#include<string.h>

int main()
{
    char source[100]="C Programing", target[100];

    strcpy(target, source);

    printf("original string = %s\n",source);
    printf("copied string   = %s\n",target);
    return 0;
}

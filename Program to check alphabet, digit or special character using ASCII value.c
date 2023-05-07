#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((ch>='A' && ch<='B') || (ch>='a' && ch<='b'))
    {
    printf("'%c' is alphabet", ch);
    }
    else if(ch>='0' && ch<='9')
    {
    printf("'%c' is digit", ch);
    }
    else
    {
    printf("'%c' is character", ch);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c", &ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
    printf("Character is a alphabet");
    }
    else
    {
    printf("Character is a not alphabet");
    }
    return 0;
}

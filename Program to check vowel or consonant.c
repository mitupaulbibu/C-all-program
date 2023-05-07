#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
    ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
    printf("'%c' is a vowel",ch);
    }
    else if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
    printf("'%c' is a consonant",ch);
    }
    else
    {
    printf("'%c' is an not alphabet",ch);
    }
    return 0;
}

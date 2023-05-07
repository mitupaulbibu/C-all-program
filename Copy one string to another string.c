#include<stdio.h>
#include<string.h>

void stringcopy(char *s1, char *s2)
{
    int i;
    for(i=0; s2[i]=s1[i]; i++);
    s2[i]='\0';
}
int main()
{
    char s1[100], s2[100];

    printf("Enter any string s1: ");
    scanf("%s", s1);
    stringcopy(s1,s2);

    printf("Original String s11=%s\n",s1);
    printf("Copyed String s12=%s\n\n",s2);

    printf("Enter any string s2: ");
    scanf("%s", s1);
    strcpy(s1,s2);

    printf("Original String s21=%s\n",s1);
    printf("Copyed String s22=%s\n",s2);

    return 0;
}

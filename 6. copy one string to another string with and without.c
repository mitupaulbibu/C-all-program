#include<stdio.h>
#include<string.h>

void stringcopy(char *s1,char *s2)
{
	int i;
    for(i=0;s2[i]=s1[i];i++);

    s2[i]='\0';
}
int main()
{
    char s1[100],s2[100];

    printf("Enter any string1: ");
    scanf("%s", s1);
    stringcopy(s1,s2);

    printf("original string s11= %s\n",s1);
    printf("copied string   s12= %s\n\n",s2);

    printf("Enter any String2: ");
    scanf("%s", s1);
    strcpy(s2, s1);

    printf("original string s21= %s\n",s1);
    printf("copied string s22= %s\n",s2);
    return 0;
}

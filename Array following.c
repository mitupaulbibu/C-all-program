#include<stdio.h>

int main()
{
    char string[100];
    printf("Enter a line of text:\n  ");
    gets(string);

    int i=0;
    while(string [i] != '\0') {
        printf("%c\n", string[i]);
        i++;

    }

   return 0;
}


#include<stdio.h>

int main()
{
    char string[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%[^\n]", &string);

    for(i=0; string[i]!='\0'; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c", string[j]);
        }
        printf("\n");
    }
    return 0;
}

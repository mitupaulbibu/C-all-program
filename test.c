#include <stdio.h>

int main()
{

    char Name[100];
    int Roll;
    float score;

    printf("Enter Your Name: ");
    scanf("%s", Name);
    printf("Enter Your Roll: ");
    scanf("%d", &Roll);
    printf("Enter Your Score: ");
    scanf("%f", &score);

    printf("Name: %s",Name );
    printf("Roll:  %d",Roll);
    printf("Score: %f",score);

    return 0;
}

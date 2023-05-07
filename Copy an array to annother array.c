#include<stdio.h>

int main()
{
    int array1[100], array2[100], i, n;
    printf("Enter any number: ");
    scanf("%d ", &n);
    for(i=0; i<n; i++) {
        //printf("%d ", i);
        scanf("%d", &array1[i]);
    }
    for(i=0; i<n; i++) {
        array2[i] = array1[i];
    }
    for(i=0; i<n; i++) {
        printf("%d ", array1[i]);
    }
    //for(i=0; i<n; i++) {
        //printf("%d ", array2[i]);
    //}
    printf("\n");
    return 0;
}


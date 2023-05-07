#include<stdio.h>
int main()
{
   int n, arr[100],cnt=0, i;

   printf("Enter the value: ");
   scanf("%d", &n);

   printf("Enter the number: \n");
   for(i=0; i<n; i++)
      scanf("%d",&arr[i]);

   printf("Even numbers in the array : \n");
   for(i=0; i<n; i++)
   {
     if(arr[i]%2==0)
     {
             cnt++;
     }
   }
   printf("%d",cnt);
   return 0;
}

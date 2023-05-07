#include<stdio.h>
#include<math.h>

int main()
{
   int i, n, num ;
   printf("Enter a positive number: ");
   scanf("%d", &n);

   for(i=2; i<=sqrt(n); i++)
   {
       if(n%i==0)
       {
           num=0;
           break;
       }
   }

   if(num==0)
   {
       printf("Not prime number");
   }
   else
   {
       printf("prime number");
   }
  return 0;

}

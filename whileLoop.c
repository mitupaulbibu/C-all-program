#include<stdio.h>
int main(){

int i=1, n;
printf("Enter the number ");
scanf("%d",&n);

while(i<=10){
    printf("%d * %d = %d\n",n,i, i*n);

    //i=i+1;
    i++; // it is equal to i=i+1
    }

}

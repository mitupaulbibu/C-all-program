# include <stdio.h>

int  main( )
{
    int  a, b, c ;
    int  *p1, *p2, *p3 ;
    printf("Enter the first number") ;
    scanf("%d",&a) ;
    printf("\nEnter the second number") ;
    scanf("%d",&b) ;
    printf("\nEnter the third number") ;
    scanf("%d",&c) ;

    p1 = &a ;
    p2 = &b ;
    p3 = &c ;

    if((  *p1> *p2) && (  *p1> *p3))
    printf("\n The Greatest Number is : %d ",*p1) ;

    else if((  *p2> *p1) && (  *p2> *p3))
    {
    printf("\n The Greatest Number is : %d ",*p2) ;
    }

    else
    {
    printf("\n The Greatest Number is : %d ",*p3) ;
    }

    return 0;
}

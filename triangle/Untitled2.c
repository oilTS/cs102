#include <stdio.h>

int main ()
{
    int a,b,c ;
    printf ("Please enter length of each side of your triangle: ") ;
    scanf ("%d%d%d",&a, &b, &c) ;

    printf ("This is ") ;

    if (a==b && b==c)
        printf ("equilateral triangle.") ;

    else if ((a==b || b==a || c==b) && ( b+c>a && a+c>b && a+b>c ))
        printf("isosceles triangle.") ;

    else if (( b+c>a && a+c>b && a+b>c ) && (a!=b && b!=c) )
    {
            printf ("scalene triangle.") ;
    }
    else if ( (b+c<a || a+c<b || a+b<c) && (a!=b && b!=c) )
    {
            printf ("NOT a triangle.") ;
    }
    return 0 ;
}


/*
    Thanlada Sampanpaisansuk
    6609612012
*/

#include <stdio.h>
int main ()
{
    int a,b,c ;
    printf ("Please enter length of each side of your triangle: ") ;
    scanf ("%d%d%d",&a, &b, &c) ;

    if ((a==b&&b==c) && (a!=0 && b!=0 && c!=0))
        printf ("This is equilateral triangle.") ;
    else
    {
        if ((a==b||b==c||c==a) && (a!=0 && b!=0 && c!=0))
        printf ("This is isosceles triangle.") ;
        else
        {
            if (b+c>a && a+c>b && a+b>c)
            printf ("This is scalene triangle.") ;
            else
            {
                printf ("This is NOT a triangle.") ;
            }

        }
    }

    return 0 ;
}

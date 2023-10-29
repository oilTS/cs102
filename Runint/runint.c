/*
    Thanlada Sampanpaisansuk
    6609612012
*/

#include <stdio.h>
int main ()

{
    int a, b, i,sum ;
    printf ("Please enter Num1: ") ;
    scanf ("%d",&a) ;
    printf ("Please enter Num2: ") ;
    scanf ("%d",&b) ;

    {
        for (int i=a ; i<=b ; i++ )
        {

            if (i%9==0 && i%6==0)
            {
                printf ("%d ",i) ;
                sum+=i ;
            }
        }
        printf ("\nTotal is %d",sum) ;
    }

    return 0 ;
}

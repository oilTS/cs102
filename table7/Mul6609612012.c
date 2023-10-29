#include <stdio.h>
int main ()

{
    int i, m ;

    for (int m=2;m<=15;m++)
    {
        printf ("%d\n",m) ;
        for (i=1;i<=12;i++)
            printf ("%d x %2d ==== %2d\n",m,i,m*i) ;
            printf ("--------------------\n") ;
    }
    return 0 ;
}

/*6609612012
Thanlada Sampanpaisansuk*/

#include <stdio.h>
int main()
{
    int amount, N1000, N500, N100 ;
    printf("Please enter your withdrawal amount : ") ;
    scanf ("%i",&amount) ;
    while (amount < 100 || amount %100 != 0 || amount > 20000)
    {
        printf ("Invalid amount!!! Please re-enter.\n") ;
        printf ("Please enter your withdrawal amount : ") ;
        scanf ("%i",&amount) ;
    }
        N1000 = amount / 1000 ;
        N500 = (amount %1000) / 500 ;
        N100 = ((amount %1000) % 500) / 100 ;
        printf ("You will get : \n") ;
        printf ("#1000-bank notes : %i\n", N1000) ;
        printf ("#500-bank notes : %i\n", N500) ;
        printf ("#100-bank notes %i\n", N100) ;
    return 0 ;
}

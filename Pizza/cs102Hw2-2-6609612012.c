/*
    Thanlada Sampanpaisansuk
    6609612012
*/

#include <stdio.h>
int main ()

{
    int money, Ntray, pieces, prov, remains ;
    printf ("Please enter a budget amount: ") ;
    scanf ("%d",&money) ;

    Ntray = money/599 ;
    pieces = Ntray*8 ;
    prov = pieces/2 ;
    remains = money%599 ;

    printf ("We can provide support for %d students.\n",prov) ;
    printf ("The amount of budget remains %d baths.\n",remains) ;

    return 0 ;
}

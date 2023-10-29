/*6609612012
Thanlada Sampanpaisansuk*/

#include <stdio.h>
int main ()
{
    int hMom,hDad,hAvg,minH,maxH ;
    printf ("Enter height of the mother : ") ;
    scanf ("%d",&hMom) ;
    printf ("\nEnter height of the father :") ;
    scanf ("%d",&hDad) ;

    hAvg = (hMom+hDad)/2 ;
    minH = hAvg - 12 ;
    maxH = hAvg + 12 ;

    printf ("The possible height is %d to %d centimeters.\n",minH,maxH) ;
    return 0 ;
}

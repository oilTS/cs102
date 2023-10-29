#include <stdio.h>
int main ()
{
    int seconds ;
    printf ("Please enter the time in seconds:") ;
    scanf ("%d",&seconds) ;

    printf ("The time is ") ;
    printf ("%d hour(s),",seconds/3600) ;
    seconds = seconds%3600 ;
    printf (" %d minute(s),",seconds/60) ;
    seconds = seconds%60 ;
    printf (" and %d second(s).",seconds) ;
    return 0 ;
}

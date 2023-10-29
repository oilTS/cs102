#include <stdio.h>
int main ()

{
    int year ;
    printf ("Please enter your student year <1-8> ") ;
    scanf ("%d",&year) ;

    if (year == 1)
        printf ("Hi,Freshman!\n") ;
    else
    {
        if (year == 2)
            {
                printf ("You are a sophomore.\n") ;
            }
        else
        {
            if (year == 3)
                printf ("Hi,Junoir.\n") ;
            else
            {
                if (year >= 4 && year <= 8)
                    printf ("Hi,Senoir.\n") ;
                else
                    printf ("Invalid Student Year!!!") ;
            }
        }
    }
    return 0;
}

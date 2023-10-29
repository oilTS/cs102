#include <stdio.h>
int main()

{
    char gend ;
    printf ("Please enter your gender <F/M>: ") ;
    scanf ("%c",&gend) ;
    switch (gend)
    {
        case 'F' : 
        case 'f' : printf ("Hello, Miss.\n") ; break ;
        case 'M' : 
        case 'm' : printf ("Hello, Sir!!\n") ; break ;
        default : printf ("Invalid Input!!!\n") ;
    }
    return 0 ;
}
/*6609612012
Thanlada Sampanpaisansuk*/

#include <stdio.h>
int main()
{
    int withdrawal ;
    printf("Enter your withdrawal amount :") ;
    scanf ("%d",&withdrawal) ;

    printf ("\nYou will get :") ;

withdrawal >= 1000 ;
        printf ("\n 1000 Banknotes = %d",withdrawal/1000) ;
        withdrawal = withdrawal%1000 ;

withdrawal >= 500 ;
        printf ("\n 500 Banknotes = %d",withdrawal/500) ;
        withdrawal = withdrawal%500 ;

withdrawal >= 100 ;
        printf ("\n 100 Banknotes = %d",withdrawal/100) ;
        withdrawal = withdrawal%100 ;

    return 0 ;
}

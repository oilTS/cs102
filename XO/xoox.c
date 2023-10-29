/*
Thanlada Sampanpaisansuk
6609612012
*/

#include <stdio.h>
int main ()
{
    int row,num,i=0 ;
    char OX[2] = {'O','X'} ;

    printf ("Enter size of your rectangle: ") ;
    scanf ("%d %d",&row,&num) ;

    for(int i = 1; i <= row; i++)
    {
      {
          if (i%2 == 1)
          {
              for(int i = 1; i <= num; i++)
                {
                    if (i%2 == 1)
                    printf ("%c",OX[0]) ;
                    else
                    printf ("%c",OX[1]) ;
                }
          }
          else
          {
              for(int i = 1; i <= num; i++)
                {
                    if (i%2 == 1)
                    printf ("%c",OX[1]) ;
                    else
                    printf ("%c",OX[0]) ;
                }
          }
      }
       printf("\n") ;
    }
    return 0 ;
}

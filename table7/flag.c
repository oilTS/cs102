#include <stdio.h>
int main ()

{
    int i,n,a;
    printf ("Enter the size of the flag: ");
    scanf ("%d",&a);

    for(i=1;i<=a;i++)
    {
      printf("\n");

      for(n=1;n<=i;n++)
      {
        printf("@");
      }
     }


    return 0 ;
}

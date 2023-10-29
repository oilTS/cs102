/*
Thanlada Sampanpaisansuk
6609612012
*/
#include <stdio.h>

int main()
{
    int n,i,j,sum;
    scanf("%d", &n);

    int matrix[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if ( n%2 != 0)
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                rowsum += matrix[i][midodd];
            colsum += matrix[midodd][i];
            }
        }
    else
    {
        for (int i = 0; i<num ;i++)
        {
            sum3 += (inp[i][center1] + inp[i][center2])/2;
            sum4 += (inp[center1][i] + inp[center2][i])/2;
        }

    }
    printf("%d", maxsum);
    return 0;
}

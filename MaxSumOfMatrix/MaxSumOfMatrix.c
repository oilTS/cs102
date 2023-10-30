/*
Thanlada Sampanpaisansuk
6609612012
*/
#include <stdio.h>

int main()
{
    int n, i, j, sum=0, rsum=0, csum=0, odd=n/2, cen1=n/2-1, cen2=n/2, dsum1=0, dsum2=0, maxsum=0;
    scanf("%d", &n);

    int matrix[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if ( n%2 == 1) //odd
        for (i = 0; i < n; i++)
        {
            rsum += matrix[i][odd];
            csum += matrix[odd][i];
        }
    else
    {
        for (i = 0; i < n; i++)
        {
            rsum += (matrix[i][cen1] + matrix[i][cen2])/2;
            csum += (matrix[cen1][i] + matrix[cen2][i])/2;
        }

    }
    for (i = 0; i < n; i++)
    {
        dsum1 += matrix[i][i];
        dsum2 += matrix[i][n - 1 - i];
    }

    if (rsum > maxsum)
    {
        maxsum = rsum;
    }
    if (csum > maxsum) {
        maxsum = csum;
    }
    if (dsum1 > maxsum) {
        maxsum = dsum1;
    }
    if (dsum2 > maxsum) {
        maxsum = dsum2;
    }
    printf("%d\n", maxsum);
    printf("%d\n", rsum);
    printf("%d\n", csum);
    printf("%d\n", dsum1);
    printf("%d\n", dsum2);

    return 0;
}

/*
Thanlada Sampanpaisansuk
6609612012
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of your square: ");
    scanf("%d", &n);

    int square[20][20];

    printf("Enter your square:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &square[i][j]);
        }
    }

    int sum = 0;

    for (int j = 0; j < n; j++)
    {
        sum += square[0][j];
    }

    int isMagic = 1;

    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;
        int colSum = 0;

        for (int j = 0; j < n; j++)
        {
            rowSum += square[i][j];
            colSum += square[j][i];
        }

        if (rowSum != sum || colSum != sum)
        {
            isMagic = 0;
        }

        maxSum += square[i][i];
    }

    int diagSum1 = 0;
    for (int i = 0; i < n; i++)
    {
        diagSum1 += square[i][i];
    }
    if (diagSum1 != sum)
    {
        isMagic = 0;
    }

    int diagSum2 = 0;
    for (int i = 0; i < n; i++)
    {
        diagSum2 += square[i][n - i - 1];
    }
    if (diagSum2 != sum)
    {
        isMagic = 0;
    }

    if (isMagic) {
        printf("Your square is a magic square!!\n");
        printf("The magic constant is %d.\n", sum);
    } else {
        printf("Your square is NOT a magic square.\n");
        printf("The maximum sum is %d.\n", maxSum);
    }

    return 0;
}

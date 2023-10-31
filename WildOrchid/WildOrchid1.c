/*
Thanlada Sampanpaisansuk
6609612012
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] ;
    scanf("%s",str);
    int mcount[12] = {0} ,max;
    int tcount[12][26] = {0};

    for(int i = 0; i < strlen(str); i += 2)
    {
        int month;
        if(str[i]> '0' && str[i] <= '9')
        {
            month = str[i]-'0'-1;
        }
        else if (str[i] >= 'A')
        {
            month = str[i]-'A '+9;
        }
        int type = str[i+1] - 'A';
        if (tcount[month][type]== 0)
        {
            tcount[month][type] = 1;
            mcount[month]++;
        }
        int max = mcount[0];
        for (int i = 0; i < 12; i++)
        {
            if(mcount[i]> max)
            {
                max = mcount[i];
            }
        printf("%d\n", mcount[i]);
        }
    }

    printf("%d",max);

    return 0;
}

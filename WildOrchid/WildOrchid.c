/*
Thanlada Sampanpaisansuk
6609612012
*/

#include <stdio.h>
#include <string.h>

int main() {
    char input[100] ;
    scanf("%s", input);
    int monthCount[12] = {0};
    int typeCount[12][26] = {0};

    int i = 0;
    while (i < strlen(input)) {
        if (isdigit(input[i]) && isalpha(input[i + 1])) {
            int month = input[i] - '0';
            char tree = input[i + 1] - 'A';
            monthCount[month - 1]++;
            typeCount[month - 1][tree]++;
            i += 2;
        } else {
            // Handle invalid input
            printf("%d: %c%c\n", i, input[i], input[i + 1]);
            break;
        }
    }

    int maxMonth = 0;
    int maxCount = 0;

    for (int month = 0; month < 12; month++) {

        int count = 0;
        for (int tree = 0; tree < 26; tree++) {
            if (typeCount[month][tree] > 0) {
                count++;
            }
        }
        printf("%d\n\n", count);

        if (count > maxCount) {
            maxCount = count;
            maxMonth = month;
        }
    }

    printf("%d\n", maxCount);

    return 0;
}


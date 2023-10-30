/*
Thanlada Sampanpaisansuk
6609612012
*/
#include <stdio.h>
#include <string.h>

int main() {
    char input[255];
    scanf("%s", input);

    int orchidCount[13][26] = {0};
    for (int i = 0; i < strlen(input); i += 2) {
        int month = input[i] - '0';
        if (input[i] >= 'A' && input[i] <= 'F') {
            month = 10 + (input[i] - 65);
        }

        int orchidSpecies = input[i + 1] - 65;
        orchidCount[month][orchidSpecies]++;
    }

    int maxOrchidCount = 0;
    for (int i = 1; i <= 12; i++) {
        int monthOrchidCount = 0;
        for (int j = 0; j < 26; j++) {
            if (orchidCount[i][j] > 0) {
                monthOrchidCount++;
            }
        }
        printf("%d\n", monthOrchidCount);

        if (monthOrchidCount > maxOrchidCount) {
            maxOrchidCount = monthOrchidCount;
        }
    }
    return 0;
}



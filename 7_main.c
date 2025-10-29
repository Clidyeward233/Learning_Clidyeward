//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

int main() {
    int record[5];
    int i;
    for (i = 0; i < 4; i++) {
        scanf("%d", &record[i]);
    }

    for (i = 4; i > 0; i--) {
        record[i] = record[i - 1];
    }
    record[0] = 0;
    for (i = 0; i < 4; i++) {
        printf("%d ", record[i]);
    }
    printf("%d", record[4]);

    return 0;
}

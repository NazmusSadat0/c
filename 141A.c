#include <stdio.h>
#include <string.h>

int main() {
    char guest[101];
    char res[101];
    char pile[101];
    scanf("%100s", guest);
    scanf("%100s", res);
    scanf("%100s", pile);
    int count[26] = {0};

    for(int i = 0; guest[i] != '\0'; i++) {
        count[guest[i] - 'A']++;
    }

    for(int i = 0; res[i] != '\0'; i++) {
        count[res[i] - 'A']++;
    }

    for(int i = 0; pile[i] != '\0'; i++) {
        count[pile[i] - 'A']--;
    }

    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}